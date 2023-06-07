from setuptools import setup

package_name = 'p_py_pkg'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='chief-of-mischief',
    maintainer_email='gr2159@nyu.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'my_publisher = p_py_pkg.publisher_2:main'
            'my_subscriber = p_py_pkg.subscriber_2:main'

        ],
    },
)
