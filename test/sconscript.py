
Import('env')
env.Append(CPPPATH = ['../googletest/googletest/include'])
env.Append(CPPPATH = ['../googletest/googletest'])

gtest_sources = ['../googletest/googletest/src/gtest-all.cc']

# gtest.lib to be used by most apps 
gtest = env.StaticLibrary(target='gtest',
                          source=gtest_sources)

# gtest_main.lib can be used if you just want a basic main function;
gtest_main = env.StaticLibrary(target='gtest_main',
                               source= gtest_sources + ['../googletest/googletest/src/gtest_main.cc'])

env.Append(CPPPATH = ['../src'])
env.Program(target = 'test_hello.exe', 
            source = ['test_hello.cpp','../src/hello.c', '../src/squareRoot.c'], 
            LIBS=[gtest_main]) 
