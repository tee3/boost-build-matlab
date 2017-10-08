pipeline {
    agent any

    stages {
        stage('Test') {
            steps {
                sh 'cd test/test_default && bjam --verbose-test'

                sh 'cd test/test_command && bjam --verbose-test'
                sh 'cd test/test_full && bjam --verbose-test'
                sh 'cd test/test_multiple && bjam --verbose-test'
                sh 'cd test/test_version && bjam --verbose-test'

                sh 'cd test/test_mismatch && bjam --verbose-test'
                sh 'cd test/test_missing && bjam --verbose-test'
            }
        }
    }
}
