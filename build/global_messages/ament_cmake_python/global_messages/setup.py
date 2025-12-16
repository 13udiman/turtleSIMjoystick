from setuptools import find_packages
from setuptools import setup

setup(
    name='global_messages',
    version='0.0.0',
    packages=find_packages(
        include=('global_messages', 'global_messages.*')),
)
