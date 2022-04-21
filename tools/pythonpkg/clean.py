import os, sys, shutil
# avoid importing from the current directory
sys.path = sys.path[1:]

<<<<<<< HEAD
try:
    import duckdb
except:
    exit(0)
next_dir = duckdb.__file__
while 'duckdb' in next_dir:
    base_dir = next_dir
    next_dir = next_dir.rsplit(os.path.sep, 1)[0]
if 'duckdb' not in base_dir:
    raise Exception("Failed to find DuckDB path to delete")
shutil.rmtree(base_dir)
=======
# try:
base_dir = duckdb.__file__.rsplit(os.path.sep, 1)[0]
for fpath in os.listdir(base_dir):
    if 'duckdb' in fpath:
        full_path = os.path.join(base_dir, fpath)
        if os.path.isfile(full_path):
            os.remove(full_path)
        else:
            shutil.rmtree(os.path.join(base_dir, fpath))
>>>>>>> afb63f610 (revert python to before RTLD_GLOBAL fix)
