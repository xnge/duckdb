import os

# list all include directories
include_directories = [os.path.sep.join(x.split('/')) for x in ['extension/icu/include', 'extension/icu/third_party/icu/common', 'extension/icu/third_party/icu/i18n']]
# source files
<<<<<<< HEAD
source_files = [os.path.sep.join(x.split('/')) for x in ['extension/icu/icu-collate.cpp', 'extension/icu/icu-extension.cpp', 'extension/icu/icu-dateadd.cpp', 'extension/icu/icu-datefunc.cpp', 'extension/icu/icu-datepart.cpp', 'extension/icu/icu-datesub.cpp', 'extension/icu/icu-datetrunc.cpp', 'extension/icu/icu-makedate.cpp', 'extension/icu/icu-strptime.cpp']]
=======
source_directories = [os.path.sep.join(x.split('/')) for x in ['.', 'third_party/icu/common', 'third_party/icu/i18n', 'third_party/icu/stubdata']]
source_files = []
base_path = os.path.dirname(os.path.abspath(__file__))
for dir in source_directories:
    source_files += [os.path.join('extension', 'icu', dir, x) for x in os.listdir(os.path.join(base_path, dir)) if x.endswith('.cpp')]

>>>>>>> 0855eed9f (Move from icu amalgamation to actually inlining the ICU code)
