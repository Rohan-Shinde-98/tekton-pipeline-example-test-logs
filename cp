=== RUN   TestResourceVersionReactor
=== RUN   TestResourceVersionReactor/first_resource
=== RUN   TestResourceVersionReactor/replace_resource_version
--- PASS: TestResourceVersionReactor (0.00s)
    --- PASS: TestResourceVersionReactor/first_resource (0.00s)
    --- PASS: TestResourceVersionReactor/replace_resource_version (0.00s)
=== RUN   TestExamples
    path_filtering.go:62: Allowing only "stable" examples
=== PAUSE TestExamples
=== RUN   TestYamls
    path_filtering.go:62: Allowing only "stable" examples
=== PAUSE TestYamls
=== RUN   TestStablePathFilter
=== RUN   TestStablePathFilter/_test.yaml
=== RUN   TestStablePathFilter/_alpha_test.yaml
=== RUN   TestStablePathFilter/_beta_test.yaml
=== RUN   TestStablePathFilter/_foo_test.yaml
=== RUN   TestStablePathFilter/_v1alpha1_taskruns_test.yaml
=== RUN   TestStablePathFilter/_v1alpha1_taskruns_alpha_test.yaml
=== RUN   TestStablePathFilter/_v1beta1_taskruns_test.yaml
=== RUN   TestStablePathFilter/_v1beta1_taskruns_alpha_test.yaml
=== RUN   TestStablePathFilter/_v1beta1_taskruns_alpha_test.yaml#01
=== RUN   TestStablePathFilter/_v1alpha1_pipelineruns_beta_test.yaml
=== RUN   TestStablePathFilter/_v1alpha1_pipelineruns_beta_test.yaml#01
--- PASS: TestStablePathFilter (0.00s)
    --- PASS: TestStablePathFilter/_test.yaml (0.00s)
    --- PASS: TestStablePathFilter/_alpha_test.yaml (0.00s)
    --- PASS: TestStablePathFilter/_beta_test.yaml (0.00s)
    --- PASS: TestStablePathFilter/_foo_test.yaml (0.00s)
    --- PASS: TestStablePathFilter/_v1alpha1_taskruns_test.yaml (0.00s)
    --- PASS: TestStablePathFilter/_v1alpha1_taskruns_alpha_test.yaml (0.00s)
    --- PASS: TestStablePathFilter/_v1beta1_taskruns_test.yaml (0.00s)
    --- PASS: TestStablePathFilter/_v1beta1_taskruns_alpha_test.yaml (0.00s)
    --- PASS: TestStablePathFilter/_v1beta1_taskruns_alpha_test.yaml#01 (0.00s)
    --- PASS: TestStablePathFilter/_v1alpha1_pipelineruns_beta_test.yaml (0.00s)
    --- PASS: TestStablePathFilter/_v1alpha1_pipelineruns_beta_test.yaml#01 (0.00s)
=== RUN   TestAlphaPathFilter
=== RUN   TestAlphaPathFilter/_test.yaml
=== RUN   TestAlphaPathFilter/_alpha_test.yaml
=== RUN   TestAlphaPathFilter/_foo_test.yaml
=== RUN   TestAlphaPathFilter/_v1alpha1_taskruns_test.yaml
=== RUN   TestAlphaPathFilter/_v1alpha1_taskruns_alpha_test.yaml
=== RUN   TestAlphaPathFilter/_v1beta1_taskruns_test.yaml
=== RUN   TestAlphaPathFilter/_v1beta1_taskruns_alpha_test.yaml
=== RUN   TestAlphaPathFilter/_v1beta1_taskruns_alpha_test.yaml#01
=== RUN   TestAlphaPathFilter/_v1alpha1_pipelineruns_beta_test.yaml
=== RUN   TestAlphaPathFilter/_v1alpha1_pipelineruns_beta_test.yaml#01
--- PASS: TestAlphaPathFilter (0.00s)
    --- PASS: TestAlphaPathFilter/_test.yaml (0.00s)
    --- PASS: TestAlphaPathFilter/_alpha_test.yaml (0.00s)
    --- PASS: TestAlphaPathFilter/_foo_test.yaml (0.00s)
    --- PASS: TestAlphaPathFilter/_v1alpha1_taskruns_test.yaml (0.00s)
    --- PASS: TestAlphaPathFilter/_v1alpha1_taskruns_alpha_test.yaml (0.00s)
    --- PASS: TestAlphaPathFilter/_v1beta1_taskruns_test.yaml (0.00s)
    --- PASS: TestAlphaPathFilter/_v1beta1_taskruns_alpha_test.yaml (0.00s)
    --- PASS: TestAlphaPathFilter/_v1beta1_taskruns_alpha_test.yaml#01 (0.00s)
    --- PASS: TestAlphaPathFilter/_v1alpha1_pipelineruns_beta_test.yaml (0.00s)
    --- PASS: TestAlphaPathFilter/_v1alpha1_pipelineruns_beta_test.yaml#01 (0.00s)
=== RUN   TestCreateImage
2021/09/20 05:19:45 GET /v2/
2021/09/20 05:19:45 HEAD /v2/task/test-create-image/blobs/sha256:9ab10150462e0b713850897e4d47ddc1e0e82a392683c177b430652929c36cc4 404 BLOB_UNKNOWN Unknown blob
2021/09/20 05:19:45 HEAD /v2/task/test-create-image/blobs/sha256:dde0f71137f2e7b5f46b439840ccf4d11c72a8853201b04f6a118365853aa8a6 404 BLOB_UNKNOWN Unknown blob
2021/09/20 05:19:45 POST /v2/task/test-create-image/blobs/uploads/
2021/09/20 05:19:45 POST /v2/task/test-create-image/blobs/uploads/
2021/09/20 05:19:45 PATCH /v2/task/test-create-image/blobs/uploads/5074508961236806653
2021/09/20 05:19:45 PATCH /v2/task/test-create-image/blobs/uploads/849609238980474837
2021/09/20 05:19:45 PUT /v2/task/test-create-image/blobs/uploads/5074508961236806653?digest=sha256%3A9ab10150462e0b713850897e4d47ddc1e0e82a392683c177b430652929c36cc4
2021/09/20 05:19:45 PUT /v2/task/test-create-image/blobs/uploads/849609238980474837?digest=sha256%3Adde0f71137f2e7b5f46b439840ccf4d11c72a8853201b04f6a118365853aa8a6
2021/09/20 05:19:45 PUT /v2/task/test-create-image/manifests/latest
2021/09/20 05:19:45 GET /v2/
2021/09/20 05:19:45 GET /v2/task/test-create-image/manifests/sha256:78e6c563134c9d91efdcb2ee897ac03f12945318efe148dd84ff298c855d1416
2021/09/20 05:19:45 GET /v2/task/test-create-image/blobs/sha256:dde0f71137f2e7b5f46b439840ccf4d11c72a8853201b04f6a118365853aa8a6
--- PASS: TestCreateImage (0.05s)
=== CONT  TestExamples
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/clustertask-pipelinerun.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/conditional-pipelinerun-with-optional-resources.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/conditional-pipelinerun-with-same-condition-refer.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/conditional-pipelinerun.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/demo-optional-resources.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/output-pipelinerun.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/pipelinerun-with-params.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/pipelinerun-with-resourcespec.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/pipelinerun.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/task_results_example.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/pipelineruns/workspaces.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/build-push-kaniko.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/cloud-event.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/clustertask.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/configmap.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/custom-env.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/custom-volume.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/dind-sidecar.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/gcs-resource.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/git-resource.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/git-ssh-creds.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/git-volume.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/home-is-set.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/home-volume.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/optional-resources-with-clustertask.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/optional-resources.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/pullrequest.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/secret-env.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/secret-volume-params.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/secret-volume.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/sidecar-interp.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/sidecar-ready-script.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/sidecar-ready.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/step-by-digest.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/step-script.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/steps-run-in-order.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/steptemplate-env-merge.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/task-multiple-output-image.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/task-output-image.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/task-result.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/task-volume-args.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/template-volume.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/unnamed-steps.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/workingdir.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/workspace-readonly.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/workspace-volume.yaml
    examples_test.go:201: Adding test ../examples/v1alpha1/taskruns/workspace.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/clustertask-pipelinerun.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/conditional-pipelinerun-with-optional-resources.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/conditional-pipelinerun-with-same-condition-refer.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/conditional-pipelinerun.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/demo-optional-resources.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/optional-workspaces.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/output-pipelinerun.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipeline-result-conditions.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-results-with-params.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-results.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-task-execution-status.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-using-different-subpaths-of-workspace.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-with-extra-params.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-with-final-tasks.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-with-parallel-tasks-using-pvc.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-with-params.yaml
=== CONT  TestYamls
=== CONT  TestExamples
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-with-resourcespec.yaml
=== CONT  TestYamls
    examples_test.go:201: Adding test yamls/v1beta1/pipelineruns/pipelinerun-with-final-tasks.yaml
=== CONT  TestExamples
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun-with-when-expressions.yaml
=== CONT  TestYamls
    examples_test.go:201: Adding test yamls/v1beta1/pipelineruns/pipelinerun.yaml
=== CONT  TestExamples
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/pipelinerun.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/task_results_example.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/using-optional-workspaces-in-when-expressions.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/using-retries-and-retry-count-variables.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/using_context_variables.yaml
=== RUN   TestYamls/yamls/v1beta1/pipelineruns/pipelinerun-with-final-tasks.yaml
=== CONT  TestExamples
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/workspace-from-volumeclaimtemplate.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/pipelineruns/workspaces.yaml
=== PAUSE TestYamls/yamls/v1beta1/pipelineruns/pipelinerun-with-final-tasks.yaml
=== RUN   TestYamls/yamls/v1beta1/pipelineruns/pipelinerun.yaml
=== PAUSE TestYamls/yamls/v1beta1/pipelineruns/pipelinerun.yaml
=== CONT  TestYamls/yamls/v1beta1/pipelineruns/pipelinerun-with-final-tasks.yaml
=== CONT  TestExamples
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/authenticating-git-commands.yaml
=== CONT  TestYamls/yamls/v1beta1/pipelineruns/pipelinerun.yaml
=== CONT  TestExamples
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/cloud-event.yaml
=== CONT  TestYamls/yamls/v1beta1/pipelineruns/pipelinerun.yaml
    multiarch_utils.go:164: skip for ppc64le architecture
=== CONT  TestExamples
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/clustertask.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/configmap.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/creds-init-only-mounts-provided-credentials.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/custom-env.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/custom-volume.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/dind-sidecar.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/gcs-resource.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/git-resource.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/git-ssh-creds-without-known_hosts.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/git-ssh-creds.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/git-volume.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/home-is-set.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/home-volume.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/image-params.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/optional-resources-with-clustertask.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/optional-resources.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/optional-workspaces.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/pullrequest.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/pullrequest_input_copystep_output.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/run-steps-as-non-root.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/secret-env.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/secret-volume-params.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/secret-volume.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/sidecar-interp.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/sidecar-ready-script.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/sidecar-ready.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/step-by-digest.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/step-script.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/steps-run-in-order.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/steptemplate-env-merge.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/task-multiple-output-image.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/task-output-image.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/task-result.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/task-volume-args.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/template-volume.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/unnamed-steps.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/using_context_variables.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/workingdir.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/workspace-in-sidecar.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/workspace-readonly.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/workspace-volume.yaml
    examples_test.go:201: Adding test ../examples/v1beta1/taskruns/workspace.yaml
=== RUN   TestExamples/v1alpha1/pipelineruns/clustertask-pipelinerun
=== PAUSE TestExamples/v1alpha1/pipelineruns/clustertask-pipelinerun
=== RUN   TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-optional-resources
=== PAUSE TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-optional-resources
=== RUN   TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-same-condition-refer
=== PAUSE TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-same-condition-refer
=== RUN   TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun
=== PAUSE TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun
=== RUN   TestExamples/v1alpha1/pipelineruns/demo-optional-resources
=== PAUSE TestExamples/v1alpha1/pipelineruns/demo-optional-resources
=== RUN   TestExamples/v1alpha1/pipelineruns/output-pipelinerun
=== PAUSE TestExamples/v1alpha1/pipelineruns/output-pipelinerun
=== RUN   TestExamples/v1alpha1/pipelineruns/pipelinerun-with-params
=== PAUSE TestExamples/v1alpha1/pipelineruns/pipelinerun-with-params
=== RUN   TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
=== PAUSE TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
=== RUN   TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec
=== PAUSE TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec
=== RUN   TestExamples/v1alpha1/pipelineruns/pipelinerun-with-resourcespec
=== PAUSE TestExamples/v1alpha1/pipelineruns/pipelinerun-with-resourcespec
=== RUN   TestExamples/v1alpha1/pipelineruns/pipelinerun
=== PAUSE TestExamples/v1alpha1/pipelineruns/pipelinerun
=== RUN   TestExamples/v1alpha1/pipelineruns/task_results_example
=== PAUSE TestExamples/v1alpha1/pipelineruns/task_results_example
=== RUN   TestExamples/v1alpha1/pipelineruns/workspaces
=== PAUSE TestExamples/v1alpha1/pipelineruns/workspaces
=== RUN   TestExamples/v1alpha1/taskruns/build-push-kaniko
=== PAUSE TestExamples/v1alpha1/taskruns/build-push-kaniko
=== RUN   TestExamples/v1alpha1/taskruns/cloud-event
=== PAUSE TestExamples/v1alpha1/taskruns/cloud-event
=== RUN   TestExamples/v1alpha1/taskruns/clustertask
=== PAUSE TestExamples/v1alpha1/taskruns/clustertask
=== RUN   TestExamples/v1alpha1/taskruns/configmap
=== PAUSE TestExamples/v1alpha1/taskruns/configmap
=== RUN   TestExamples/v1alpha1/taskruns/custom-env
=== PAUSE TestExamples/v1alpha1/taskruns/custom-env
=== RUN   TestExamples/v1alpha1/taskruns/custom-volume
=== PAUSE TestExamples/v1alpha1/taskruns/custom-volume
=== RUN   TestExamples/v1alpha1/taskruns/dind-sidecar
=== PAUSE TestExamples/v1alpha1/taskruns/dind-sidecar
=== RUN   TestExamples/v1alpha1/taskruns/gcs-resource
=== PAUSE TestExamples/v1alpha1/taskruns/gcs-resource
=== RUN   TestExamples/v1alpha1/taskruns/git-resource
=== PAUSE TestExamples/v1alpha1/taskruns/git-resource
=== RUN   TestExamples/v1alpha1/taskruns/git-ssh-creds
=== PAUSE TestExamples/v1alpha1/taskruns/git-ssh-creds
=== RUN   TestExamples/v1alpha1/taskruns/git-volume
=== PAUSE TestExamples/v1alpha1/taskruns/git-volume
=== RUN   TestExamples/v1alpha1/taskruns/home-is-set
=== PAUSE TestExamples/v1alpha1/taskruns/home-is-set
=== RUN   TestExamples/v1alpha1/taskruns/home-volume
=== PAUSE TestExamples/v1alpha1/taskruns/home-volume
=== RUN   TestExamples/v1alpha1/taskruns/optional-resources-with-clustertask
=== PAUSE TestExamples/v1alpha1/taskruns/optional-resources-with-clustertask
=== RUN   TestExamples/v1alpha1/taskruns/optional-resources
=== PAUSE TestExamples/v1alpha1/taskruns/optional-resources
=== RUN   TestExamples/v1alpha1/taskruns/pullrequest
=== PAUSE TestExamples/v1alpha1/taskruns/pullrequest
=== RUN   TestExamples/v1alpha1/taskruns/secret-env
=== PAUSE TestExamples/v1alpha1/taskruns/secret-env
=== RUN   TestExamples/v1alpha1/taskruns/secret-volume-params
=== PAUSE TestExamples/v1alpha1/taskruns/secret-volume-params
=== RUN   TestExamples/v1alpha1/taskruns/secret-volume
=== PAUSE TestExamples/v1alpha1/taskruns/secret-volume
=== RUN   TestExamples/v1alpha1/taskruns/sidecar-interp
=== PAUSE TestExamples/v1alpha1/taskruns/sidecar-interp
=== RUN   TestExamples/v1alpha1/taskruns/sidecar-ready-script
=== PAUSE TestExamples/v1alpha1/taskruns/sidecar-ready-script
=== RUN   TestExamples/v1alpha1/taskruns/sidecar-ready
=== PAUSE TestExamples/v1alpha1/taskruns/sidecar-ready
=== RUN   TestExamples/v1alpha1/taskruns/step-by-digest
=== PAUSE TestExamples/v1alpha1/taskruns/step-by-digest
=== RUN   TestExamples/v1alpha1/taskruns/step-script
=== PAUSE TestExamples/v1alpha1/taskruns/step-script
=== RUN   TestExamples/v1alpha1/taskruns/steps-run-in-order
=== PAUSE TestExamples/v1alpha1/taskruns/steps-run-in-order
=== RUN   TestExamples/v1alpha1/taskruns/steptemplate-env-merge
=== PAUSE TestExamples/v1alpha1/taskruns/steptemplate-env-merge
=== RUN   TestExamples/v1alpha1/taskruns/task-multiple-output-image
=== PAUSE TestExamples/v1alpha1/taskruns/task-multiple-output-image
=== RUN   TestExamples/v1alpha1/taskruns/task-output-image
=== PAUSE TestExamples/v1alpha1/taskruns/task-output-image
=== RUN   TestExamples/v1alpha1/taskruns/task-result
=== PAUSE TestExamples/v1alpha1/taskruns/task-result
=== RUN   TestExamples/v1alpha1/taskruns/task-volume-args
=== PAUSE TestExamples/v1alpha1/taskruns/task-volume-args
=== RUN   TestExamples/v1alpha1/taskruns/template-volume
=== PAUSE TestExamples/v1alpha1/taskruns/template-volume
=== RUN   TestExamples/v1alpha1/taskruns/unnamed-steps
=== PAUSE TestExamples/v1alpha1/taskruns/unnamed-steps
=== RUN   TestExamples/v1alpha1/taskruns/workingdir
=== PAUSE TestExamples/v1alpha1/taskruns/workingdir
=== RUN   TestExamples/v1alpha1/taskruns/workspace-readonly
=== PAUSE TestExamples/v1alpha1/taskruns/workspace-readonly
=== RUN   TestExamples/v1alpha1/taskruns/workspace-volume
=== PAUSE TestExamples/v1alpha1/taskruns/workspace-volume
=== RUN   TestExamples/v1alpha1/taskruns/workspace
=== PAUSE TestExamples/v1alpha1/taskruns/workspace
=== RUN   TestExamples/v1beta1/pipelineruns/clustertask-pipelinerun
=== PAUSE TestExamples/v1beta1/pipelineruns/clustertask-pipelinerun
=== RUN   TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-optional-resources
=== PAUSE TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-optional-resources
=== RUN   TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-same-condition-refer
=== PAUSE TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-same-condition-refer
=== RUN   TestExamples/v1beta1/pipelineruns/conditional-pipelinerun
=== PAUSE TestExamples/v1beta1/pipelineruns/conditional-pipelinerun
=== RUN   TestExamples/v1beta1/pipelineruns/demo-optional-resources
=== PAUSE TestExamples/v1beta1/pipelineruns/demo-optional-resources
=== RUN   TestExamples/v1beta1/pipelineruns/optional-workspaces
=== PAUSE TestExamples/v1beta1/pipelineruns/optional-workspaces
=== RUN   TestExamples/v1beta1/pipelineruns/output-pipelinerun
=== PAUSE TestExamples/v1beta1/pipelineruns/output-pipelinerun
=== RUN   TestExamples/v1beta1/pipelineruns/pipeline-result-conditions
=== PAUSE TestExamples/v1beta1/pipelineruns/pipeline-result-conditions
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-results-with-params
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-results-with-params
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-results
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-results
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-task-execution-status
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-task-execution-status
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-using-different-subpaths-of-workspace
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-using-different-subpaths-of-workspace
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-with-extra-params
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-with-extra-params
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-with-final-tasks
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-with-final-tasks
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-with-parallel-tasks-using-pvc
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-with-parallel-tasks-using-pvc
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-with-params
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-with-params
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-with-resourcespec
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-with-resourcespec
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun-with-when-expressions
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun-with-when-expressions
=== RUN   TestExamples/v1beta1/pipelineruns/pipelinerun
=== PAUSE TestExamples/v1beta1/pipelineruns/pipelinerun
=== RUN   TestExamples/v1beta1/pipelineruns/task_results_example
=== PAUSE TestExamples/v1beta1/pipelineruns/task_results_example
=== RUN   TestExamples/v1beta1/pipelineruns/using-optional-workspaces-in-when-expressions
=== PAUSE TestExamples/v1beta1/pipelineruns/using-optional-workspaces-in-when-expressions
=== RUN   TestExamples/v1beta1/pipelineruns/using-retries-and-retry-count-variables
=== PAUSE TestExamples/v1beta1/pipelineruns/using-retries-and-retry-count-variables
=== RUN   TestExamples/v1beta1/pipelineruns/using_context_variables
=== PAUSE TestExamples/v1beta1/pipelineruns/using_context_variables
=== RUN   TestExamples/v1beta1/pipelineruns/workspace-from-volumeclaimtemplate
=== PAUSE TestExamples/v1beta1/pipelineruns/workspace-from-volumeclaimtemplate
=== RUN   TestExamples/v1beta1/pipelineruns/workspaces
=== PAUSE TestExamples/v1beta1/pipelineruns/workspaces
=== RUN   TestExamples/v1beta1/taskruns/authenticating-git-commands
=== PAUSE TestExamples/v1beta1/taskruns/authenticating-git-commands
=== RUN   TestExamples/v1beta1/taskruns/cloud-event
=== PAUSE TestExamples/v1beta1/taskruns/cloud-event
=== RUN   TestExamples/v1beta1/taskruns/clustertask
=== PAUSE TestExamples/v1beta1/taskruns/clustertask
=== RUN   TestExamples/v1beta1/taskruns/configmap
=== PAUSE TestExamples/v1beta1/taskruns/configmap
=== RUN   TestExamples/v1beta1/taskruns/creds-init-only-mounts-provided-credentials
=== PAUSE TestExamples/v1beta1/taskruns/creds-init-only-mounts-provided-credentials
=== RUN   TestExamples/v1beta1/taskruns/custom-env
=== PAUSE TestExamples/v1beta1/taskruns/custom-env
=== RUN   TestExamples/v1beta1/taskruns/custom-volume
=== PAUSE TestExamples/v1beta1/taskruns/custom-volume
=== RUN   TestExamples/v1beta1/taskruns/dind-sidecar
=== PAUSE TestExamples/v1beta1/taskruns/dind-sidecar
=== RUN   TestExamples/v1beta1/taskruns/gcs-resource
=== PAUSE TestExamples/v1beta1/taskruns/gcs-resource
=== RUN   TestExamples/v1beta1/taskruns/git-resource
=== PAUSE TestExamples/v1beta1/taskruns/git-resource
=== RUN   TestExamples/v1beta1/taskruns/git-ssh-creds-without-known_hosts
=== PAUSE TestExamples/v1beta1/taskruns/git-ssh-creds-without-known_hosts
=== RUN   TestExamples/v1beta1/taskruns/git-ssh-creds
=== PAUSE TestExamples/v1beta1/taskruns/git-ssh-creds
=== RUN   TestExamples/v1beta1/taskruns/git-volume
=== PAUSE TestExamples/v1beta1/taskruns/git-volume
=== RUN   TestExamples/v1beta1/taskruns/home-is-set
=== PAUSE TestExamples/v1beta1/taskruns/home-is-set
=== RUN   TestExamples/v1beta1/taskruns/home-volume
=== PAUSE TestExamples/v1beta1/taskruns/home-volume
=== RUN   TestExamples/v1beta1/taskruns/image-params
=== PAUSE TestExamples/v1beta1/taskruns/image-params
=== RUN   TestExamples/v1beta1/taskruns/optional-resources-with-clustertask
=== PAUSE TestExamples/v1beta1/taskruns/optional-resources-with-clustertask
=== RUN   TestExamples/v1beta1/taskruns/optional-resources
=== PAUSE TestExamples/v1beta1/taskruns/optional-resources
=== RUN   TestExamples/v1beta1/taskruns/optional-workspaces
=== PAUSE TestExamples/v1beta1/taskruns/optional-workspaces
=== RUN   TestExamples/v1beta1/taskruns/pullrequest
=== PAUSE TestExamples/v1beta1/taskruns/pullrequest
=== RUN   TestExamples/v1beta1/taskruns/pullrequest_input_copystep_output
=== PAUSE TestExamples/v1beta1/taskruns/pullrequest_input_copystep_output
=== RUN   TestExamples/v1beta1/taskruns/run-steps-as-non-root
=== PAUSE TestExamples/v1beta1/taskruns/run-steps-as-non-root
=== RUN   TestExamples/v1beta1/taskruns/secret-env
=== PAUSE TestExamples/v1beta1/taskruns/secret-env
=== RUN   TestExamples/v1beta1/taskruns/secret-volume-params
=== PAUSE TestExamples/v1beta1/taskruns/secret-volume-params
=== RUN   TestExamples/v1beta1/taskruns/secret-volume
=== PAUSE TestExamples/v1beta1/taskruns/secret-volume
=== RUN   TestExamples/v1beta1/taskruns/sidecar-interp
=== PAUSE TestExamples/v1beta1/taskruns/sidecar-interp
=== RUN   TestExamples/v1beta1/taskruns/sidecar-ready-script
=== PAUSE TestExamples/v1beta1/taskruns/sidecar-ready-script
=== RUN   TestExamples/v1beta1/taskruns/sidecar-ready
=== PAUSE TestExamples/v1beta1/taskruns/sidecar-ready
=== RUN   TestExamples/v1beta1/taskruns/step-by-digest
=== PAUSE TestExamples/v1beta1/taskruns/step-by-digest
=== RUN   TestExamples/v1beta1/taskruns/step-script
=== PAUSE TestExamples/v1beta1/taskruns/step-script
=== RUN   TestExamples/v1beta1/taskruns/steps-run-in-order
=== PAUSE TestExamples/v1beta1/taskruns/steps-run-in-order
=== RUN   TestExamples/v1beta1/taskruns/steptemplate-env-merge
=== PAUSE TestExamples/v1beta1/taskruns/steptemplate-env-merge
=== RUN   TestExamples/v1beta1/taskruns/task-multiple-output-image
=== PAUSE TestExamples/v1beta1/taskruns/task-multiple-output-image
=== RUN   TestExamples/v1beta1/taskruns/task-output-image
=== PAUSE TestExamples/v1beta1/taskruns/task-output-image
=== RUN   TestExamples/v1beta1/taskruns/task-result
=== PAUSE TestExamples/v1beta1/taskruns/task-result
=== RUN   TestExamples/v1beta1/taskruns/task-volume-args
=== PAUSE TestExamples/v1beta1/taskruns/task-volume-args
=== RUN   TestExamples/v1beta1/taskruns/template-volume
=== PAUSE TestExamples/v1beta1/taskruns/template-volume
=== RUN   TestExamples/v1beta1/taskruns/unnamed-steps
=== PAUSE TestExamples/v1beta1/taskruns/unnamed-steps
=== RUN   TestExamples/v1beta1/taskruns/using_context_variables
=== PAUSE TestExamples/v1beta1/taskruns/using_context_variables
=== RUN   TestExamples/v1beta1/taskruns/workingdir
=== PAUSE TestExamples/v1beta1/taskruns/workingdir
=== RUN   TestExamples/v1beta1/taskruns/workspace-in-sidecar
=== PAUSE TestExamples/v1beta1/taskruns/workspace-in-sidecar
=== RUN   TestExamples/v1beta1/taskruns/workspace-readonly
=== PAUSE TestExamples/v1beta1/taskruns/workspace-readonly
=== RUN   TestExamples/v1beta1/taskruns/workspace-volume
=== PAUSE TestExamples/v1beta1/taskruns/workspace-volume
=== RUN   TestExamples/v1beta1/taskruns/workspace
=== PAUSE TestExamples/v1beta1/taskruns/workspace
=== CONT  TestExamples/v1alpha1/pipelineruns/clustertask-pipelinerun
=== CONT  TestExamples/v1beta1/taskruns/workspace
=== CONT  TestExamples/v1beta1/taskruns/workspace-volume
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-task-execution-status
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-results
=== CONT  TestExamples/v1beta1/pipelineruns/pipeline-result-conditions
=== CONT  TestExamples/v1alpha1/taskruns/optional-resources
=== CONT  TestExamples/v1alpha1/pipelineruns/clustertask-pipelinerun
    init_test.go:135: Create namespace arendelle-m5ddj to deploy to
=== CONT  TestExamples/v1beta1/pipelineruns/pipeline-result-conditions
    init_test.go:135: Create namespace arendelle-d6wff to deploy to
=== CONT  TestYamls/yamls/v1beta1/pipelineruns/pipelinerun-with-final-tasks.yaml
    init_test.go:135: Create namespace arendelle-n7tvl to deploy to
=== CONT  TestExamples/v1beta1/taskruns/workspace
    init_test.go:135: Create namespace arendelle-x6x78 to deploy to
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-task-execution-status
    init_test.go:135: Create namespace arendelle-5ddkh to deploy to
=== CONT  TestExamples/v1beta1/taskruns/workspace-volume
    init_test.go:135: Create namespace arendelle-nkc6q to deploy to
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-results
    init_test.go:135: Create namespace arendelle-m8588 to deploy to
=== CONT  TestExamples/v1alpha1/taskruns/optional-resources
    init_test.go:135: Create namespace arendelle-bmmjb to deploy to
=== CONT  TestExamples/v1alpha1/pipelineruns/clustertask-pipelinerun
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-m5ddj"
=== CONT  TestExamples/v1beta1/pipelineruns/pipeline-result-conditions
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-d6wff"
=== CONT  TestYamls/yamls/v1beta1/pipelineruns/pipelinerun-with-final-tasks.yaml
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-n7tvl"
=== CONT  TestExamples/v1beta1/taskruns/workspace
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-x6x78"
=== CONT  TestExamples/v1beta1/taskruns/workspace-volume
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-nkc6q"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-task-execution-status
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-5ddkh"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-results
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-m8588"
=== CONT  TestExamples/v1alpha1/taskruns/optional-resources
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-bmmjb"
=== CONT  TestExamples/v1alpha1/pipelineruns/clustertask-pipelinerun
    examples_test.go:109: Deleting clustertask cluster-task-pipeline-4-v1alpha1
    examples_test.go:169: Deleting namespace arendelle-m5ddj
=== CONT  TestExamples/v1alpha1/taskruns/pullrequest
    init_test.go:135: Create namespace arendelle-q5qg7 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-q5qg7"
=== CONT  TestExamples/v1beta1/taskruns/workspace-volume
    examples_test.go:169: Deleting namespace arendelle-nkc6q
=== CONT  TestExamples/v1beta1/pipelineruns/demo-optional-resources
    init_test.go:135: Create namespace arendelle-8sktw to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-8sktw"
=== CONT  TestExamples/v1alpha1/taskruns/optional-resources
    examples_test.go:169: Deleting namespace arendelle-bmmjb
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
    init_test.go:135: Create namespace arendelle-bsp4m to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-bsp4m"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-results
    examples_test.go:169: Deleting namespace arendelle-m8588
=== CONT  TestExamples/v1alpha1/taskruns/build-push-kaniko
    init_test.go:135: Create namespace arendelle-92hxn to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-92hxn"
=== CONT  TestExamples/v1alpha1/taskruns/pullrequest
    examples_test.go:169: Deleting namespace arendelle-q5qg7
=== CONT  TestExamples/v1alpha1/taskruns/workspace
    init_test.go:135: Create namespace arendelle-kxf5x to deploy to
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-task-execution-status
    examples_test.go:169: Deleting namespace arendelle-5ddkh
=== CONT  TestExamples/v1beta1/pipelineruns/conditional-pipelinerun
=== CONT  TestExamples/v1alpha1/taskruns/workspace
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-kxf5x"
=== CONT  TestExamples/v1beta1/pipelineruns/conditional-pipelinerun
    init_test.go:135: Create namespace arendelle-8p4hz to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-8p4hz"
=== CONT  TestExamples/v1beta1/taskruns/workspace
    examples_test.go:169: Deleting namespace arendelle-x6x78
=== CONT  TestExamples/v1alpha1/pipelineruns/workspaces
=== CONT  TestExamples/v1beta1/pipelineruns/pipeline-result-conditions
    examples_test.go:169: Deleting namespace arendelle-d6wff
=== CONT  TestExamples/v1alpha1/pipelineruns/workspaces
    init_test.go:135: Create namespace arendelle-p9pw8 to deploy to
=== CONT  TestExamples/v1alpha1/taskruns/workspace-readonly
=== CONT  TestExamples/v1alpha1/pipelineruns/workspaces
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-p9pw8"
=== CONT  TestExamples/v1alpha1/taskruns/workspace-readonly
    init_test.go:135: Create namespace arendelle-4fgfm to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-4fgfm"
=== CONT  TestExamples/v1beta1/pipelineruns/demo-optional-resources
    examples_test.go:169: Deleting namespace arendelle-8sktw
=== CONT  TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-optional-resources
    init_test.go:135: Create namespace arendelle-gj2n5 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-gj2n5"
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
    examples_test.go:169: Deleting namespace arendelle-bsp4m
=== CONT  TestExamples/v1beta1/taskruns/workingdir
    init_test.go:135: Create namespace arendelle-ttdcm to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-ttdcm"
=== CONT  TestExamples/v1alpha1/taskruns/build-push-kaniko
    examples_test.go:62: Failed waiting for task run done: "build-push-kaniko" failed
    panic.go:636: ############################################
    panic.go:636: ### Dumping objects from arendelle-92hxn ###
    panic.go:636: ############################################
    panic.go:636: 
        ---
        apiVersion: tekton.dev/v1alpha1
        kind: PipelineResource
        metadata:
          creationTimestamp: "2021-09-20T09:21:46Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:params: {}
                f:type: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:21:46Z"
          name: skaffold-git-build-push-kaniko
          namespace: arendelle-92hxn
          resourceVersion: "1723588"
          selfLink: /apis/tekton.dev/v1alpha1/namespaces/arendelle-92hxn/pipelineresources/skaffold-git-build-push-kaniko
          uid: 630ea39b-2e13-4980-b3f2-a37ec4c19657
        spec:
          params:
          - name: revision
            value: v0.32.0
          - name: url
            value: https://github.com/GoogleContainerTools/skaffold
          type: git
        
        ---
        apiVersion: tekton.dev/v1alpha1
        kind: PipelineResource
        metadata:
          creationTimestamp: "2021-09-20T09:21:46Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:params: {}
                f:type: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:21:46Z"
          name: skaffold-image-leeroy-web-build-push-kaniko
          namespace: arendelle-92hxn
          resourceVersion: "1723587"
          selfLink: /apis/tekton.dev/v1alpha1/namespaces/arendelle-92hxn/pipelineresources/skaffold-image-leeroy-web-build-push-kaniko
          uid: 16755ed1-f2e5-4bc0-adf4-af68ac803a8e
        spec:
          params:
          - name: url
            value: localhost:5000/leeroy-web
          type: image
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: Task
        metadata:
          creationTimestamp: "2021-09-20T09:21:46Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:inputs:
                  .: {}
                  f:params: {}
                  f:resources: {}
                f:outputs:
                  .: {}
                  f:resources: {}
                f:sidecars: {}
                f:steps: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:21:46Z"
          name: build-push-kaniko
          namespace: arendelle-92hxn
          resourceVersion: "1723591"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-92hxn/tasks/build-push-kaniko
          uid: 80c15563-a69d-4aa4-96c1-bf4b888e0f06
        spec:
          params:
          - default: /workspace/workspace/Dockerfile
            description: The path to the dockerfile to build
            name: pathToDockerFile
            type: string
          - default: /workspace/workspace
            description: The build context used by Kaniko (https://github.com/GoogleContainerTools/kaniko#kaniko-build-contexts)
            name: pathToContext
            type: string
          resources:
            inputs:
            - name: workspace
              type: git
            outputs:
            - name: builtImage
              type: image
          sidecars:
          - image: ppc64le/registry:2
            name: registry
            resources: {}
          steps:
          - args:
            - --dockerfile=$(inputs.params.pathToDockerFile)
            - --destination=$(outputs.resources.builtImage.url)
            - --context=$(inputs.params.pathToContext)
            - --oci-layout-path=$(inputs.resources.builtImage.path)
            env:
            - name: DOCKER_CONFIG
              value: /tekton/home/.docker/
            image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
            name: build-and-push
            resources: {}
            securityContext:
              runAsUser: 0
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: ClusterTask
        metadata:
          creationTimestamp: "2021-09-20T08:50:19Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:steps: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T08:50:19Z"
          name: cluster-task-pipeline-4
          resourceVersion: "1698975"
          selfLink: /apis/tekton.dev/v1beta1/clustertasks/cluster-task-pipeline-4
          uid: 0e1573dd-438c-4fc3-b529-cf1a4415a2f9
        spec:
          steps:
          - args:
            - -c
            - echo success
            command:
            - /bin/bash
            image: ubuntu
            name: task-two-step-one
            resources: {}
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: TaskRun
        metadata:
          annotations:
            pipeline.tekton.dev/release: 9c61cdf
          creationTimestamp: "2021-09-20T09:21:46Z"
          generation: 1
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/task: build-push-kaniko
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:inputs:
                  .: {}
                  f:params: {}
                  f:resources: {}
                f:outputs:
                  .: {}
                  f:resources: {}
                f:taskRef:
                  .: {}
                  f:name: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:21:46Z"
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
                f:labels:
                  f:tekton.dev/task: {}
              f:status:
                f:completionTime: {}
                f:conditions: {}
                f:podName: {}
                f:sidecars: {}
                f:startTime: {}
                f:steps: {}
                f:taskSpec:
                  .: {}
                  f:params: {}
                  f:resources:
                    .: {}
                    f:inputs: {}
                    f:outputs: {}
                  f:sidecars: {}
                  f:steps: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:23:37Z"
          name: build-push-kaniko
          namespace: arendelle-92hxn
          resourceVersion: "1725416"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-92hxn/taskruns/build-push-kaniko
          uid: e38fe609-eb8f-47c1-9a1a-731e1845e520
        spec:
          params:
          - name: pathToDockerFile
            value: Dockerfile
          - name: pathToContext
            value: /workspace/workspace/examples/microservices/leeroy-web
          resources:
            inputs:
            - name: workspace
              resourceRef:
                name: skaffold-git-build-push-kaniko
            outputs:
            - name: builtImage
              resourceRef:
                name: skaffold-image-leeroy-web-build-push-kaniko
          serviceAccountName: default
          taskRef:
            kind: Task
            name: build-push-kaniko
          timeout: 1h0m0s
        status:
          completionTime: "2021-09-20T09:23:37Z"
          conditions:
          - lastTransitionTime: "2021-09-20T09:23:37Z"
            message: |
              "step-build-and-push" exited with code 1 (image: "docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e"); for logs run: kubectl -n arendelle-92hxn logs build-push-kaniko-pod-jlgfl -c step-build-and-push
            reason: Failed
            status: "False"
            type: Succeeded
          podName: build-push-kaniko-pod-jlgfl
          sidecars:
          - container: sidecar-registry
            imageID: docker-pullable://ppc64le/registry@sha256:b30e5b352ab4e523d7a02a0a99ca0dc32b1c61c71507b82c17f26b31c6a75632
            name: registry
            running:
              startedAt: "2021-09-20T09:22:21Z"
          startTime: "2021-09-20T09:21:47Z"
          steps:
          - container: step-create-dir-builtimage-8flxq
            imageID: docker-pullable://gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            name: create-dir-builtimage-8flxq
            terminated:
              containerID: docker://f96ed1b8ad27612410aa7ef4c7810c4f32836e3fdc2d47737dd1f62ec6d41a5c
              exitCode: 0
              finishedAt: "2021-09-20T09:22:33Z"
              reason: Completed
              startedAt: "2021-09-20T09:22:33Z"
          - container: step-git-source-workspace-2gc58
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            name: git-source-workspace-2gc58
            terminated:
              containerID: docker://bcc43a13783b8794b6eb818c6d1262ed582b448464f4ca521e6abb47381d3114
              exitCode: 0
              finishedAt: "2021-09-20T09:22:44Z"
              message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}}]'
              reason: Completed
              startedAt: "2021-09-20T09:22:34Z"
          - container: step-build-and-push
            imageID: docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e
            name: build-and-push
            terminated:
              containerID: docker://b3cec2fa3ad6f091c169dca277106975df39a9b144599dd16672a5c6cd776f8b
              exitCode: 1
              finishedAt: "2021-09-20T09:23:35Z"
              reason: Error
              startedAt: "2021-09-20T09:22:44Z"
          - container: step-image-digest-exporter-v4skl
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
            name: image-digest-exporter-v4skl
            terminated:
              containerID: docker://24597985401b2dbc68ae0df9d6fcd735244757e7e41ea957b585ff5596d83998
              exitCode: 1
              finishedAt: "2021-09-20T09:23:36Z"
              reason: Error
              startedAt: "2021-09-20T09:23:36Z"
          taskSpec:
            params:
            - default: /workspace/workspace/Dockerfile
              description: The path to the dockerfile to build
              name: pathToDockerFile
              type: string
            - default: /workspace/workspace
              description: The build context used by Kaniko (https://github.com/GoogleContainerTools/kaniko#kaniko-build-contexts)
              name: pathToContext
              type: string
            resources:
              inputs:
              - name: workspace
                type: git
              outputs:
              - name: builtImage
                type: image
            sidecars:
            - image: ppc64le/registry:2
              name: registry
              resources: {}
            steps:
            - args:
              - --dockerfile=$(inputs.params.pathToDockerFile)
              - --destination=$(outputs.resources.builtImage.url)
              - --context=$(inputs.params.pathToContext)
              - --oci-layout-path=$(inputs.resources.builtImage.path)
              env:
              - name: DOCKER_CONFIG
                value: /tekton/home/.docker/
              image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
              name: build-and-push
              resources: {}
              securityContext:
                runAsUser: 0
        
        ---
        metadata:
          annotations:
            cni.projectcalico.org/containerID: ae891d6c9f7c19c9aa01fbd0e6a1fee834a7dba26d17c57045eab254e33d4a64
            cni.projectcalico.org/podIP: 172.20.64.10/32
            cni.projectcalico.org/podIPs: 172.20.64.10/32
            pipeline.tekton.dev/release: 9c61cdf
            tekton.dev/ready: READY
          creationTimestamp: "2021-09-20T09:21:47Z"
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/task: build-push-kaniko
            tekton.dev/taskRun: build-push-kaniko
          managedFields:
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  f:cni.projectcalico.org/containerID: {}
                  f:cni.projectcalico.org/podIP: {}
                  f:cni.projectcalico.org/podIPs: {}
            manager: calico
            operation: Update
            time: "2021-09-20T09:21:53Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
                  f:tekton.dev/ready: {}
                f:labels:
                  .: {}
                  f:app.kubernetes.io/managed-by: {}
                  f:tekton.dev/task: {}
                  f:tekton.dev/taskRun: {}
                f:ownerReferences:
                  .: {}
                  k:{"uid":"e38fe609-eb8f-47c1-9a1a-731e1845e520"}:
                    .: {}
                    f:apiVersion: {}
                    f:blockOwnerDeletion: {}
                    f:controller: {}
                    f:kind: {}
                    f:name: {}
                    f:uid: {}
              f:spec:
                f:activeDeadlineSeconds: {}
                f:containers:
                  k:{"name":"sidecar-registry"}:
                    .: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                  k:{"name":"step-build-and-push"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:env:
                      .: {}
                      k:{"name":"DOCKER_CONFIG"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:securityContext:
                      .: {}
                      f:runAsUser: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                  k:{"name":"step-create-dir-builtimage-8flxq"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/downward"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                  k:{"name":"step-git-source-workspace-2gc58"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:env:
                      .: {}
                      k:{"name":"HOME"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                      k:{"name":"TEKTON_RESOURCE_NAME"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                  k:{"name":"step-image-digest-exporter-v4skl"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                f:dnsPolicy: {}
                f:enableServiceLinks: {}
                f:initContainers:
                  .: {}
                  k:{"name":"place-tools"}:
                    .: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                f:restartPolicy: {}
                f:schedulerName: {}
                f:securityContext: {}
                f:serviceAccount: {}
                f:serviceAccountName: {}
                f:terminationGracePeriodSeconds: {}
                f:volumes:
                  .: {}
                  k:{"name":"tekton-creds-init-home-0"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-1"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-2"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-3"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-internal-downward"}:
                    .: {}
                    f:downwardAPI:
                      .: {}
                      f:defaultMode: {}
                      f:items: {}
                    f:name: {}
                  k:{"name":"tekton-internal-home"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-results"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-steps"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-tools"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-workspace"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:23:37Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:status:
                f:conditions:
                  k:{"type":"ContainersReady"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:message: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Initialized"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Ready"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:message: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                f:containerStatuses: {}
                f:hostIP: {}
                f:initContainerStatuses: {}
                f:phase: {}
                f:podIP: {}
                f:podIPs:
                  .: {}
                  k:{"ip":"172.20.64.10"}:
                    .: {}
                    f:ip: {}
                f:startTime: {}
            manager: kubelet
            operation: Update
            time: "2021-09-20T09:23:37Z"
          name: build-push-kaniko-pod-jlgfl
          namespace: arendelle-92hxn
          ownerReferences:
          - apiVersion: tekton.dev/v1beta1
            blockOwnerDeletion: true
            controller: true
            kind: TaskRun
            name: build-push-kaniko
            uid: e38fe609-eb8f-47c1-9a1a-731e1845e520
          resourceVersion: "1725420"
          selfLink: /api/v1/namespaces/arendelle-92hxn/pods/build-push-kaniko-pod-jlgfl
          uid: f96c2720-78db-4bd8-bc10-ec9c2f851015
        spec:
          activeDeadlineSeconds: 5400
          containers:
          - args:
            - -wait_file
            - /tekton/downward/ready
            - -wait_file_content
            - -post_file
            - /tekton/tools/0
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-create-dir-builtimage-8flxq
            - -step_metadata_dir_link
            - /tekton/steps/0
            - -entrypoint
            - mkdir
            - --
            - -p
            - /workspace/output/builtImage
            command:
            - /tekton/tools/entrypoint
            image: gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            imagePullPolicy: IfNotPresent
            name: step-create-dir-builtimage-8flxq
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/downward
              name: tekton-internal-downward
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-0
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-t6zpl
              readOnly: true
          - args:
            - -wait_file
            - /tekton/tools/0
            - -post_file
            - /tekton/tools/1
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-git-source-workspace-2gc58
            - -step_metadata_dir_link
            - /tekton/steps/1
            - -entrypoint
            - /ko-app/git-init
            - --
            - -url
            - https://github.com/GoogleContainerTools/skaffold
            - -path
            - /workspace/workspace
            - -revision
            - v0.32.0
            command:
            - /tekton/tools/entrypoint
            env:
            - name: TEKTON_RESOURCE_NAME
              value: workspace
            - name: HOME
              value: /tekton/home
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            imagePullPolicy: IfNotPresent
            name: step-git-source-workspace-2gc58
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-1
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-t6zpl
              readOnly: true
            workingDir: /workspace
          - args:
            - -wait_file
            - /tekton/tools/1
            - -post_file
            - /tekton/tools/2
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-build-and-push
            - -step_metadata_dir_link
            - /tekton/steps/2
            - -entrypoint
            - /kaniko/executor
            - --
            - --dockerfile=Dockerfile
            - --destination=localhost:5000/leeroy-web
            - --context=/workspace/workspace/examples/microservices/leeroy-web
            - --oci-layout-path=$(inputs.resources.builtImage.path)
            command:
            - /tekton/tools/entrypoint
            env:
            - name: DOCKER_CONFIG
              value: /tekton/home/.docker/
            image: index.docker.io/ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e
            imagePullPolicy: IfNotPresent
            name: step-build-and-push
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            securityContext:
              runAsUser: 0
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-2
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-t6zpl
              readOnly: true
          - args:
            - -wait_file
            - /tekton/tools/2
            - -post_file
            - /tekton/tools/3
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-image-digest-exporter-v4skl
            - -step_metadata_dir_link
            - /tekton/steps/3
            - -entrypoint
            - /ko-app/imagedigestexporter
            - --
            - -images
            - '[{"name":"builtImage","type":"image","url":"localhost:5000/leeroy-web","digest":"","OutputImageDir":"/workspace/output/builtImage"}]'
            command:
            - /tekton/tools/entrypoint
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
            imagePullPolicy: IfNotPresent
            name: step-image-digest-exporter-v4skl
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-3
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-t6zpl
              readOnly: true
          - image: ppc64le-cluster.bastion-p.svc.cluster.local:443/nop-8eac7c133edad5df719dc37b36b62482@sha256:61863e0164ed04af9adf54484cce155c9497d786ee13cda1fc1b2f1037fe1b2e
            imagePullPolicy: IfNotPresent
            name: sidecar-registry
            resources: {}
            terminationMessagePath: /dev/termination-log
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-t6zpl
              readOnly: true
          dnsPolicy: ClusterFirst
          enableServiceLinks: true
          initContainers:
          - command:
            - /ko-app/entrypoint
            - cp
            - /ko-app/entrypoint
            - /tekton/tools/entrypoint
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            imagePullPolicy: IfNotPresent
            name: place-tools
            resources: {}
            terminationMessagePath: /dev/termination-log
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-t6zpl
              readOnly: true
            workingDir: /
          nodeName: snat-vm1
          preemptionPolicy: PreemptLowerPriority
          priority: 0
          restartPolicy: Never
          schedulerName: default-scheduler
          securityContext: {}
          serviceAccount: default
          serviceAccountName: default
          terminationGracePeriodSeconds: 30
          tolerations:
          - effect: NoExecute
            key: node.kubernetes.io/not-ready
            operator: Exists
            tolerationSeconds: 300
          - effect: NoExecute
            key: node.kubernetes.io/unreachable
            operator: Exists
            tolerationSeconds: 300
          volumes:
          - emptyDir: {}
            name: tekton-internal-workspace
          - emptyDir: {}
            name: tekton-internal-home
          - emptyDir: {}
            name: tekton-internal-results
          - emptyDir: {}
            name: tekton-internal-steps
          - emptyDir: {}
            name: tekton-internal-tools
          - downwardAPI:
              defaultMode: 420
              items:
              - fieldRef:
                  apiVersion: v1
                  fieldPath: metadata.annotations['tekton.dev/ready']
                path: ready
            name: tekton-internal-downward
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-0
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-1
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-2
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-3
          - name: default-token-t6zpl
            secret:
              defaultMode: 420
              secretName: default-token-t6zpl
        status:
          conditions:
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:21:58Z"
            status: "True"
            type: Initialized
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:22:36Z"
            message: 'containers with unready status: [step-create-dir-builtimage-8flxq step-git-source-workspace-2gc58
              step-build-and-push step-image-digest-exporter-v4skl]'
            reason: ContainersNotReady
            status: "False"
            type: Ready
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:22:36Z"
            message: 'containers with unready status: [step-create-dir-builtimage-8flxq step-git-source-workspace-2gc58
              step-build-and-push step-image-digest-exporter-v4skl]'
            reason: ContainersNotReady
            status: "False"
            type: ContainersReady
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:21:47Z"
            status: "True"
            type: PodScheduled
          containerStatuses:
          - containerID: docker://845bec1b83470c3e48508716b2a3d3066b50190b54de5447745ade037e24337f
            image: ppc64le/registry:2
            imageID: docker-pullable://ppc64le/registry@sha256:b30e5b352ab4e523d7a02a0a99ca0dc32b1c61c71507b82c17f26b31c6a75632
            lastState: {}
            name: sidecar-registry
            ready: true
            restartCount: 0
            started: true
            state:
              running:
                startedAt: "2021-09-20T09:22:21Z"
          - containerID: docker://b3cec2fa3ad6f091c169dca277106975df39a9b144599dd16672a5c6cd776f8b
            image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
            imageID: docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e
            lastState: {}
            name: step-build-and-push
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://b3cec2fa3ad6f091c169dca277106975df39a9b144599dd16672a5c6cd776f8b
                exitCode: 1
                finishedAt: "2021-09-20T09:23:35Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:22:44.443Z","type":"InternalTektonResult"}]'
                reason: Error
                startedAt: "2021-09-20T09:22:07Z"
          - containerID: docker://f96ed1b8ad27612410aa7ef4c7810c4f32836e3fdc2d47737dd1f62ec6d41a5c
            image: sha256:2b725792e3b49e8cfdc1214f355219693d58ac02ef3751cfaa451da71a46f29d
            imageID: docker-pullable://gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            lastState: {}
            name: step-create-dir-builtimage-8flxq
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://f96ed1b8ad27612410aa7ef4c7810c4f32836e3fdc2d47737dd1f62ec6d41a5c
                exitCode: 0
                finishedAt: "2021-09-20T09:22:33Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:22:33.491Z","type":"InternalTektonResult"}]'
                reason: Completed
                startedAt: "2021-09-20T09:22:01Z"
          - containerID: docker://bcc43a13783b8794b6eb818c6d1262ed582b448464f4ca521e6abb47381d3114
            image: sha256:4a0cc10c5831fdd70d05d21ffb7a004be9894a284a91d0c5425981c71ea3f42a
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            lastState: {}
            name: step-git-source-workspace-2gc58
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://bcc43a13783b8794b6eb818c6d1262ed582b448464f4ca521e6abb47381d3114
                exitCode: 0
                finishedAt: "2021-09-20T09:22:44Z"
                message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"StartedAt","value":"2021-09-20T09:22:34.429Z","type":"InternalTektonResult"}]'
                reason: Completed
                startedAt: "2021-09-20T09:22:04Z"
          - containerID: docker://24597985401b2dbc68ae0df9d6fcd735244757e7e41ea957b585ff5596d83998
            image: sha256:e982e3b9e7b7a15a626dc64643ff196c76d7b665fdf23293296d4aa450a28c40
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
            lastState: {}
            name: step-image-digest-exporter-v4skl
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://24597985401b2dbc68ae0df9d6fcd735244757e7e41ea957b585ff5596d83998
                exitCode: 1
                finishedAt: "2021-09-20T09:23:36Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:23:36.224Z","type":"InternalTektonResult"}]'
                reason: Error
                startedAt: "2021-09-20T09:22:09Z"
          hostIP: 192.168.100.196
          initContainerStatuses:
          - containerID: docker://5b1b8cb0469ecde2f8f3cef6dc9053ffe2012c5cbc655d15e135a50d5d675fc4
            image: sha256:d070f203876e5761802c781f19abcca89e4f28a13752a22284260530834012be
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            lastState: {}
            name: place-tools
            ready: true
            restartCount: 0
            state:
              terminated:
                containerID: docker://5b1b8cb0469ecde2f8f3cef6dc9053ffe2012c5cbc655d15e135a50d5d675fc4
                exitCode: 0
                finishedAt: "2021-09-20T09:21:55Z"
                reason: Completed
                startedAt: "2021-09-20T09:21:55Z"
          phase: Running
          podIP: 172.20.64.10
          podIPs:
          - ip: 172.20.64.10
          qosClass: BestEffort
          startTime: "2021-09-20T09:21:47Z"
        
    panic.go:636: #####################################################
    panic.go:636: ### Dumping logs from Pods in the arendelle-92hxn ###
    panic.go:636: #####################################################
=== CONT  TestExamples/v1beta1/taskruns/workingdir
    examples_test.go:169: Deleting namespace arendelle-ttdcm
=== CONT  TestExamples/v1alpha1/taskruns/task-volume-args
    init_test.go:135: Create namespace arendelle-l8752 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-l8752"
=== CONT  TestExamples/v1alpha1/taskruns/build-push-kaniko
    build_logs.go:37: build logs 
        >>> Container step-create-dir-builtimage-8flxq:
        
        >>> Container step-git-source-workspace-2gc58:
        {"level":"info","ts":1632129762.9658434,"caller":"git/git.go:169","msg":"Successfully cloned https://github.com/GoogleContainerTools/skaffold @ 6ed7aad5e8a36052ee5f6079fc91368e362121f7 (grafted, HEAD) in path /workspace/workspace"}
        {"level":"info","ts":1632129762.9879737,"caller":"git/git.go:207","msg":"Successfully initialized and updated submodules in path /workspace/workspace"}
        
        >>> Container step-build-and-push:
        [36mINFO[0m[0004] Resolved base name golang:1.12.5-alpine3.9 to golang:1.12.5-alpine3.9 
        [36mINFO[0m[0004] Resolved base name alpine:3.9 to alpine:3.9  
        [36mINFO[0m[0004] Resolved base name golang:1.12.5-alpine3.9 to golang:1.12.5-alpine3.9 
        [36mINFO[0m[0004] Resolved base name alpine:3.9 to alpine:3.9  
        [36mINFO[0m[0004] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0005] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0006] Retrieving image manifest alpine:3.9         
        [36mINFO[0m[0006] Retrieving image manifest alpine:3.9         
        [36mINFO[0m[0006] Built cross stage deps: map[0:[/web]]        
        [36mINFO[0m[0006] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0006] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0007] Unpacking rootfs as cmd COPY web.go . requires it. 
        [36mINFO[0m[0021] Taking snapshot of full filesystem...        
        [36mINFO[0m[0049] COPY web.go .                                
        [36mINFO[0m[0049] Taking snapshot of files...                  
        [36mINFO[0m[0049] RUN go build -o /web .                       
        [36mINFO[0m[0049] cmd: /bin/sh                                 
        [36mINFO[0m[0049] args: [-c go build -o /web .]                
        # _/go
        /usr/local/go/pkg/tool/linux_ppc64le/link: running gcc failed: exec: "gcc": executable file not found in $PATH
        
        error building image: error building stage: failed to execute command: waiting for process to exit: exit status 2
        
        >>> Container step-image-digest-exporter-v4skl:
        2021/09/20 09:23:36 Skipping step because a previous step failed
        
        >>> Container sidecar-registry:
        time="2021-09-20T09:22:21.452431Z" level=info msg="debug server listening localhost:5001" 
        time="2021-09-20T09:22:21.464942Z" level=warning msg="No HTTP secret provided - generated random secret. This may cause problems with uploads if multiple registries are behind a load-balancer. To provide a shared secret, fill in http.secret in the configuration file or set the REGISTRY_HTTP_SECRET environment variable." environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:21.465101Z" level=info msg="endpoint local-5003 disabled, skipping" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:21.465243Z" level=info msg="endpoint local-8083 disabled, skipping" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:21.470449Z" level=info msg="using redis blob descriptor cache" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:21.470762Z" level=info msg="listening on [::]:5000" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:31.471112Z" level=debug msg="filesystem.List(\"/\")" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=64µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).List" trace.id=416019e7-6eba-4f98-8af7-242e164dbe8d trace.line=150 version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:41.471096Z" level=debug msg="filesystem.List(\"/\")" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=69µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).List" trace.id=9963eb8f-0b74-43ec-88a4-4cba6065b5ad trace.line=150 version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:44.755854Z" level=debug msg="authorizing request" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=e9de233b-ec7b-43c2-9a90-cdb17cc7a0ff http.request.method=GET http.request.remoteaddr="127.0.0.1:44980" http.request.uri="/v2/" http.request.useragent="Go-http-client/1.1" instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:44.756053Z" level=info msg="response completed" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=e9de233b-ec7b-43c2-9a90-cdb17cc7a0ff http.request.method=GET http.request.remoteaddr="127.0.0.1:44980" http.request.uri="/v2/" http.request.useragent="Go-http-client/1.1" http.response.contenttype="application/json; charset=utf-8" http.response.duration=3.199ms http.response.status=200 http.response.written=2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry version=v2.5.0-rc.1-67-g4abae2a.m 
        127.0.0.1 - - [20/Sep/2021:09:22:44 +0000] "GET /v2/ HTTP/1.1" 200 2 "" "Go-http-client/1.1"
        time="2021-09-20T09:22:44.763906Z" level=debug msg="authorizing request" environment=development go.version=go1.6.2 http.request.contenttype="application/json" http.request.host="localhost:5000" http.request.id=a1ee912e-5f74-4e7d-9bc4-c8faba1f11e1 http.request.method=POST http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry vars.name=leeroy-web version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:44.764183Z" level=debug msg="(*linkedBlobStore).Writer" environment=development go.version=go1.6.2 http.request.contenttype="application/json" http.request.host="localhost:5000" http.request.id=a1ee912e-5f74-4e7d-9bc4-c8faba1f11e1 http.request.method=POST http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry vars.name=leeroy-web version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:46.023388Z" level=debug msg="filesystem.PutContent(\"/docker/registry/v2/repositories/leeroy-web/_uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb/startedat\")" environment=development go.version=go1.6.2 http.request.contenttype="application/json" http.request.host="localhost:5000" http.request.id=a1ee912e-5f74-4e7d-9bc4-c8faba1f11e1 http.request.method=POST http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=1.259036s trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).PutContent" trace.id=360b66c8-9d42-4133-80cc-6651a4f357c6 trace.line=95 vars.name=leeroy-web version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:46.023769Z" level=debug msg="filesystem.Writer(\"/docker/registry/v2/repositories/leeroy-web/_uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb/data\", false)" environment=development go.version=go1.6.2 http.request.contenttype="application/json" http.request.host="localhost:5000" http.request.id=a1ee912e-5f74-4e7d-9bc4-c8faba1f11e1 http.request.method=POST http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=248µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).Writer" trace.id=a09cc2fd-8634-4324-b312-958ef4180bc9 trace.line=124 vars.name=leeroy-web version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:48.897438Z" level=debug msg="filesystem.PutContent(\"/docker/registry/v2/repositories/leeroy-web/_uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb/hashstates/sha256/0\")" environment=development go.version=go1.6.2 http.request.contenttype="application/json" http.request.host="localhost:5000" http.request.id=a1ee912e-5f74-4e7d-9bc4-c8faba1f11e1 http.request.method=POST http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=2.873355s trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).PutContent" trace.id=0be027f3-34a7-4067-b0ce-d540383ca639 trace.line=95 vars.name=leeroy-web version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:48.898056Z" level=info msg="response completed" environment=development go.version=go1.6.2 http.request.contenttype="application/json" http.request.host="localhost:5000" http.request.id=a1ee912e-5f74-4e7d-9bc4-c8faba1f11e1 http.request.method=POST http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/" http.request.useragent=go-containerregistry http.response.duration=4.138313s http.response.status=202 http.response.written=0 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry version=v2.5.0-rc.1-67-g4abae2a.m 
        127.0.0.1 - - [20/Sep/2021:09:22:44 +0000] "POST /v2/leeroy-web/blobs/uploads/ HTTP/1.1" 202 0 "" "go-containerregistry"
        time="2021-09-20T09:22:48.911494Z" level=debug msg="authorizing request" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry vars.name=leeroy-web vars.uuid=4f1a0c17-d298-440c-a9fc-803d427e41cb version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:48.911869Z" level=debug msg="(*linkedBlobStore).Resume" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry vars.name=leeroy-web vars.uuid=4f1a0c17-d298-440c-a9fc-803d427e41cb version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:48.912177Z" level=debug msg="filesystem.GetContent(\"/docker/registry/v2/repositories/leeroy-web/_uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb/startedat\")" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=129µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).GetContent" trace.id=027eb998-73da-47e8-bd0c-011db02fd92b trace.line=82 vars.name=leeroy-web vars.uuid=4f1a0c17-d298-440c-a9fc-803d427e41cb version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:48.912476Z" level=debug msg="filesystem.Writer(\"/docker/registry/v2/repositories/leeroy-web/_uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb/data\", true)" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=87µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).Writer" trace.id=e6ce8aec-5410-40b6-9843-536332b0154e trace.line=124 vars.name=leeroy-web vars.uuid=4f1a0c17-d298-440c-a9fc-803d427e41cb version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:48.912638Z" level=debug msg="(*blobWriter).Cancel" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry vars.name=leeroy-web vars.uuid=4f1a0c17-d298-440c-a9fc-803d427e41cb version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:49.087369Z" level=debug msg="filesystem.PutContent(\"/docker/registry/v2/repositories/leeroy-web/_uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb/hashstates/sha256/0\")" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=174.349ms trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).PutContent" trace.id=d1e5fdf3-58b7-4c47-b6d0-a523f799da3d trace.line=95 vars.name=leeroy-web vars.uuid=4f1a0c17-d298-440c-a9fc-803d427e41cb version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:49.087556Z" level=error msg="error closing blobwriter: fsync: bad file descriptor" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry vars.name=leeroy-web vars.uuid=4f1a0c17-d298-440c-a9fc-803d427e41cb version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:49.672138Z" level=debug msg="filesystem.Delete(\"/docker/registry/v2/repositories/leeroy-web/_uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb\")" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=584.412ms trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).Delete" trace.id=d9d5af7c-a993-480c-a2ef-12663a943780 trace.line=177 vars.name=leeroy-web vars.uuid=4f1a0c17-d298-440c-a9fc-803d427e41cb version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:50.417309Z" level=debug msg="filesystem.PutContent(\"/docker/registry/v2/repositories/leeroy-web/_uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb/hashstates/sha256/0\")" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=744.953ms trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).PutContent" trace.id=ca693891-538d-4d4b-95da-93436e1ef340 trace.line=95 vars.name=leeroy-web vars.uuid=4f1a0c17-d298-440c-a9fc-803d427e41cb version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:22:50.417572Z" level=info msg="response completed" environment=development go.version=go1.6.2 http.request.host="localhost:5000" http.request.id=015f1807-5963-49e8-9c6c-10b3d3cf72e0 http.request.method=DELETE http.request.remoteaddr="127.0.0.1:44982" http.request.uri="/v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D" http.request.useragent=go-containerregistry http.response.duration=1.509508s http.response.status=204 http.response.written=0 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry version=v2.5.0-rc.1-67-g4abae2a.m 
        127.0.0.1 - - [20/Sep/2021:09:22:48 +0000] "DELETE /v2/leeroy-web/blobs/uploads/4f1a0c17-d298-440c-a9fc-803d427e41cb?_state=iEHv-3UvQOdNLFdNvud_BdynLR-QaJml-4enKx8fRg17Ik5hbWUiOiJsZWVyb3ktd2ViIiwiVVVJRCI6IjRmMWEwYzE3LWQyOTgtNDQwYy1hOWZjLTgwM2Q0MjdlNDFjYiIsIk9mZnNldCI6MCwiU3RhcnRlZEF0IjoiMjAyMS0wOS0yMFQwOToyMjo0NC43NjQyNzlaIn0%3D HTTP/1.1" 204 0 "" "go-containerregistry"
        time="2021-09-20T09:22:51.471037Z" level=debug msg="filesystem.List(\"/\")" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=50µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).List" trace.id=2787b130-c6aa-4a3c-a245-f2e9ef8c7b0d trace.line=150 version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:23:01.471055Z" level=debug msg="filesystem.List(\"/\")" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=60µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).List" trace.id=d7cfb74b-d83d-4a5e-8d53-786a923ebfa2 trace.line=150 version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:23:11.471111Z" level=debug msg="filesystem.List(\"/\")" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=70µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).List" trace.id=86550858-0679-41c0-bf2c-8ccd54bc12d5 trace.line=150 version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:23:21.471278Z" level=debug msg="filesystem.List(\"/\")" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=82µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).List" trace.id=443c6d3c-96bc-4fd7-9423-7d2daea9bfbe trace.line=150 version=v2.5.0-rc.1-67-g4abae2a.m 
        time="2021-09-20T09:23:31.47209Z" level=debug msg="filesystem.List(\"/\")" environment=development go.version=go1.6.2 instance.id=cef3eea4-714d-4275-ac3d-5c40aef2cca9 service=registry trace.duration=96µs trace.file="/go/src/github.com/docker/distribution/registry/storage/driver/base/base.go" trace.func="github.com/docker/distribution/registry/storage/driver/base.(*Base).List" trace.id=cd8ca89d-e723-46b1-92d2-78d3d7eaf5fd trace.line=150 version=v2.5.0-rc.1-67-g4abae2a.m 
=== CONT  TestExamples/v1beta1/taskruns/using_context_variables
    init_test.go:135: Create namespace arendelle-v9xqt to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-v9xqt"
=== CONT  TestExamples/v1alpha1/taskruns/workspace-readonly
    examples_test.go:169: Deleting namespace arendelle-4fgfm
=== CONT  TestExamples/v1beta1/pipelineruns/using_context_variables
    init_test.go:135: Create namespace arendelle-95qlw to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-95qlw"
=== CONT  TestYamls/yamls/v1beta1/pipelineruns/pipelinerun-with-final-tasks.yaml
    examples_test.go:169: Deleting namespace arendelle-n7tvl
=== CONT  TestExamples/v1beta1/taskruns/unnamed-steps
--- PASS: TestYamls (0.00s)
    --- SKIP: TestYamls/yamls/v1beta1/pipelineruns/pipelinerun.yaml (0.00s)
    --- PASS: TestYamls/yamls/v1beta1/pipelineruns/pipelinerun-with-final-tasks.yaml (255.49s)
=== CONT  TestExamples/v1beta1/taskruns/unnamed-steps
    init_test.go:135: Create namespace arendelle-88xdm to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-88xdm"
=== CONT  TestExamples/v1alpha1/taskruns/workspace
    examples_test.go:169: Deleting namespace arendelle-kxf5x
=== CONT  TestExamples/v1beta1/taskruns/creds-init-only-mounts-provided-credentials
    init_test.go:135: Create namespace arendelle-j67g8 to deploy to
=== CONT  TestExamples/v1alpha1/pipelineruns/workspaces
    examples_test.go:169: Deleting namespace arendelle-p9pw8
=== CONT  TestExamples/v1beta1/taskruns/creds-init-only-mounts-provided-credentials
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-j67g8"
=== CONT  TestExamples/v1alpha1/pipelineruns/output-pipelinerun
    init_test.go:135: Create namespace arendelle-46wt7 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-46wt7"
=== CONT  TestExamples/v1alpha1/taskruns/task-volume-args
    examples_test.go:169: Deleting namespace arendelle-l8752
=== CONT  TestExamples/v1beta1/taskruns/git-volume
    init_test.go:135: Create namespace arendelle-bkdwg to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-bkdwg"
=== CONT  TestExamples/v1beta1/taskruns/using_context_variables
    examples_test.go:169: Deleting namespace arendelle-v9xqt
=== CONT  TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-optional-resources
    examples_test.go:169: Deleting namespace arendelle-gj2n5
=== CONT  TestExamples/v1beta1/taskruns/task-volume-args
    init_test.go:135: Create namespace arendelle-92blw to deploy to
=== CONT  TestExamples/v1beta1/taskruns/configmap
    init_test.go:135: Create namespace arendelle-fjf84 to deploy to
=== CONT  TestExamples/v1beta1/taskruns/task-volume-args
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-92blw"
=== CONT  TestExamples/v1beta1/taskruns/configmap
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-fjf84"
=== CONT  TestExamples/v1beta1/pipelineruns/using_context_variables
    examples_test.go:169: Deleting namespace arendelle-95qlw
=== CONT  TestExamples/v1beta1/taskruns/git-resource
    init_test.go:135: Create namespace arendelle-bvxtq to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-bvxtq"
=== CONT  TestExamples/v1beta1/taskruns/git-volume
    examples_test.go:169: Deleting namespace arendelle-bkdwg
=== CONT  TestExamples/v1beta1/taskruns/workspace-readonly
    init_test.go:135: Create namespace arendelle-fhvqz to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-fhvqz"
=== CONT  TestExamples/v1beta1/taskruns/creds-init-only-mounts-provided-credentials
    examples_test.go:169: Deleting namespace arendelle-j67g8
=== CONT  TestExamples/v1beta1/taskruns/secret-env
    init_test.go:135: Create namespace arendelle-bhksm to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-bhksm"
=== CONT  TestExamples/v1beta1/pipelineruns/conditional-pipelinerun
    examples_test.go:169: Deleting namespace arendelle-8p4hz
=== CONT  TestExamples/v1beta1/taskruns/git-ssh-creds-without-known_hosts
    init_test.go:135: Create namespace arendelle-4s99d to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-4s99d"
=== CONT  TestExamples/v1beta1/taskruns/unnamed-steps
    examples_test.go:169: Deleting namespace arendelle-88xdm
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-params
    init_test.go:135: Create namespace arendelle-zqg7f to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-zqg7f"
=== CONT  TestExamples/v1beta1/taskruns/task-volume-args
    examples_test.go:169: Deleting namespace arendelle-92blw
=== CONT  TestExamples/v1beta1/taskruns/steps-run-in-order
    init_test.go:135: Create namespace arendelle-n9fnz to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-n9fnz"
=== CONT  TestExamples/v1beta1/taskruns/configmap
    examples_test.go:169: Deleting namespace arendelle-fjf84
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-parallel-tasks-using-pvc
    init_test.go:135: Create namespace arendelle-bgbd4 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-bgbd4"
=== CONT  TestExamples/v1beta1/taskruns/git-resource
    examples_test.go:169: Deleting namespace arendelle-bvxtq
=== CONT  TestExamples/v1beta1/taskruns/custom-volume
    init_test.go:135: Create namespace arendelle-9hjf5 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-9hjf5"
=== CONT  TestExamples/v1beta1/taskruns/secret-env
    examples_test.go:169: Deleting namespace arendelle-bhksm
=== CONT  TestExamples/v1beta1/taskruns/sidecar-interp
    init_test.go:135: Create namespace arendelle-96cvx to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-96cvx"
=== CONT  TestExamples/v1beta1/taskruns/workspace-readonly
    examples_test.go:169: Deleting namespace arendelle-fhvqz
=== CONT  TestExamples/v1beta1/taskruns/optional-workspaces
    init_test.go:135: Create namespace arendelle-8q86q to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-8q86q"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-params
    examples_test.go:169: Deleting namespace arendelle-zqg7f
=== CONT  TestExamples/v1beta1/pipelineruns/using-optional-workspaces-in-when-expressions
    init_test.go:135: Create namespace arendelle-wx9qf to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-wx9qf"
=== CONT  TestExamples/v1beta1/taskruns/steps-run-in-order
    examples_test.go:169: Deleting namespace arendelle-n9fnz
=== CONT  TestExamples/v1alpha1/taskruns/gcs-resource
    multiarch_utils.go:164: skip for ppc64le architecture
=== CONT  TestExamples/v1beta1/taskruns/authenticating-git-commands
    init_test.go:135: Create namespace arendelle-qvspv to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-qvspv"
=== CONT  TestExamples/v1beta1/taskruns/git-ssh-creds-without-known_hosts
    examples_test.go:169: Deleting namespace arendelle-4s99d
=== CONT  TestExamples/v1alpha1/taskruns/custom-env
    init_test.go:135: Create namespace arendelle-94pg7 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-94pg7"
=== CONT  TestExamples/v1alpha1/pipelineruns/output-pipelinerun
    examples_test.go:169: Deleting namespace arendelle-46wt7
=== CONT  TestExamples/v1beta1/taskruns/sidecar-ready
    init_test.go:135: Create namespace arendelle-mswmk to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-mswmk"
=== CONT  TestExamples/v1beta1/taskruns/custom-volume
    examples_test.go:169: Deleting namespace arendelle-9hjf5
=== CONT  TestExamples/v1alpha1/taskruns/step-script
    init_test.go:135: Create namespace arendelle-ck9kd to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-ck9kd"
=== CONT  TestExamples/v1beta1/taskruns/sidecar-interp
    examples_test.go:169: Deleting namespace arendelle-96cvx
=== CONT  TestExamples/v1alpha1/taskruns/steps-run-in-order
    init_test.go:135: Create namespace arendelle-v2f9m to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-v2f9m"
=== CONT  TestExamples/v1beta1/taskruns/optional-workspaces
    examples_test.go:169: Deleting namespace arendelle-8q86q
=== CONT  TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-same-condition-refer
    init_test.go:135: Create namespace arendelle-g4n7p to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-g4n7p"
=== CONT  TestExamples/v1alpha1/taskruns/custom-env
    examples_test.go:169: Deleting namespace arendelle-94pg7
=== CONT  TestExamples/v1beta1/pipelineruns/using-optional-workspaces-in-when-expressions
    examples_test.go:169: Deleting namespace arendelle-wx9qf
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-params
=== CONT  TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-params
    init_test.go:135: Create namespace arendelle-wfrw8 to deploy to
=== CONT  TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun
    init_test.go:135: Create namespace arendelle-7sm75 to deploy to
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-params
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-wfrw8"
=== CONT  TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-7sm75"
=== CONT  TestExamples/v1beta1/taskruns/authenticating-git-commands
    examples_test.go:169: Deleting namespace arendelle-qvspv
=== CONT  TestExamples/v1alpha1/taskruns/workspace-volume
    init_test.go:135: Create namespace arendelle-slfmm to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-slfmm"
=== CONT  TestExamples/v1alpha1/taskruns/steps-run-in-order
    examples_test.go:169: Deleting namespace arendelle-v2f9m
=== CONT  TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-optional-resources
    init_test.go:135: Create namespace arendelle-qkhdr to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-qkhdr"
=== CONT  TestExamples/v1beta1/taskruns/sidecar-ready
    examples_test.go:169: Deleting namespace arendelle-mswmk
=== CONT  TestExamples/v1alpha1/taskruns/workingdir
    init_test.go:135: Create namespace arendelle-9xm8k to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-9xm8k"
=== CONT  TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-same-condition-refer
    examples_test.go:169: Deleting namespace arendelle-g4n7p
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-results-with-params
    init_test.go:135: Create namespace arendelle-g47r6 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-g47r6"
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-params
    examples_test.go:169: Deleting namespace arendelle-wfrw8
=== CONT  TestExamples/v1alpha1/taskruns/task-result
    init_test.go:135: Create namespace arendelle-5hq7p to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-5hq7p"
    examples_test.go:153: pipelinerun or taskrun not created for ../examples/v1alpha1/taskruns/task-result.yaml
    panic.go:636: Deleting namespace arendelle-5hq7p
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun
    init_test.go:135: Create namespace arendelle-ckkbw to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-ckkbw"
=== CONT  TestExamples/v1alpha1/taskruns/workingdir
    examples_test.go:169: Deleting namespace arendelle-9xm8k
=== CONT  TestExamples/v1alpha1/taskruns/task-multiple-output-image
    init_test.go:135: Create namespace arendelle-f2fbd to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-f2fbd"
=== CONT  TestExamples/v1alpha1/taskruns/workspace-volume
    examples_test.go:169: Deleting namespace arendelle-slfmm
=== CONT  TestExamples/v1alpha1/taskruns/steptemplate-env-merge
    init_test.go:135: Create namespace arendelle-kv9hl to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-kv9hl"
=== CONT  TestExamples/v1alpha1/taskruns/step-script
    examples_test.go:169: Deleting namespace arendelle-ck9kd
=== CONT  TestExamples/v1alpha1/taskruns/task-output-image
    init_test.go:135: Create namespace arendelle-jw6pl to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-jw6pl"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-parallel-tasks-using-pvc
    examples_test.go:169: Deleting namespace arendelle-bgbd4
=== CONT  TestExamples/v1beta1/pipelineruns/output-pipelinerun
    init_test.go:135: Create namespace arendelle-xfwdr to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-xfwdr"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-results-with-params
    examples_test.go:169: Deleting namespace arendelle-g47r6
=== CONT  TestExamples/v1beta1/taskruns/optional-resources-with-clustertask
    init_test.go:135: Create namespace arendelle-rbqx7 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-rbqx7"
=== CONT  TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-optional-resources
    examples_test.go:169: Deleting namespace arendelle-qkhdr
=== CONT  TestExamples/v1beta1/pipelineruns/clustertask-pipelinerun
    init_test.go:135: Create namespace arendelle-79c66 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-79c66"
=== CONT  TestExamples/v1alpha1/taskruns/steptemplate-env-merge
    examples_test.go:169: Deleting namespace arendelle-kv9hl
=== CONT  TestExamples/v1alpha1/taskruns/step-by-digest
    init_test.go:135: Create namespace arendelle-hpn97 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-hpn97"
=== CONT  TestExamples/v1alpha1/taskruns/task-output-image
    examples_test.go:169: Deleting namespace arendelle-jw6pl
=== CONT  TestExamples/v1beta1/taskruns/workspace-in-sidecar
    init_test.go:135: Create namespace arendelle-ccgbk to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-ccgbk"
=== CONT  TestExamples/v1alpha1/taskruns/task-multiple-output-image
    examples_test.go:169: Deleting namespace arendelle-f2fbd
=== CONT  TestExamples/v1alpha1/taskruns/sidecar-ready
    init_test.go:135: Create namespace arendelle-s4nrb to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-s4nrb"
=== CONT  TestExamples/v1beta1/taskruns/optional-resources-with-clustertask
    examples_test.go:109: Deleting clustertask clustertask-with-optional-resources-v1beta1
    examples_test.go:169: Deleting namespace arendelle-rbqx7
=== CONT  TestExamples/v1alpha1/taskruns/unnamed-steps
    init_test.go:135: Create namespace arendelle-vwcmg to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-vwcmg"
=== CONT  TestExamples/v1beta1/pipelineruns/clustertask-pipelinerun
    examples_test.go:144: exit status 1 Output: pipeline.tekton.dev/sample-pipeline-cluster-task-4 created
        pipelinerun.tekton.dev/demo-pipeline-run-4 created
        Error from server (AlreadyExists): error when creating "STDIN": clustertasks.tekton.dev "cluster-task-pipeline-4" already exists
    panic.go:636: ############################################
    panic.go:636: ### Dumping objects from arendelle-79c66 ###
    panic.go:636: ############################################
    panic.go:636: 
        ---
        apiVersion: tekton.dev/v1beta1
        kind: Pipeline
        metadata:
          creationTimestamp: "2021-09-20T09:29:42Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:tasks: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:29:42Z"
          name: sample-pipeline-cluster-task-4
          namespace: arendelle-79c66
          resourceVersion: "1731932"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-79c66/pipelines/sample-pipeline-cluster-task-4
          uid: 4c48c483-11e1-4779-ab7b-6e03e848fde7
        spec:
          tasks:
          - name: cluster-task-pipeline-4
            taskRef:
              kind: ClusterTask
              name: cluster-task-pipeline-4
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: PipelineRun
        metadata:
          creationTimestamp: "2021-09-20T09:29:42Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:pipelineRef:
                  .: {}
                  f:name: {}
                f:serviceAccountName: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:29:42Z"
          name: demo-pipeline-run-4
          namespace: arendelle-79c66
          resourceVersion: "1731934"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-79c66/pipelineruns/demo-pipeline-run-4
          uid: 3524e97d-d1b6-40fa-b22d-6bdd2f916256
        spec:
          pipelineRef:
            name: sample-pipeline-cluster-task-4
          serviceAccountName: default
          timeout: 1h0m0s
        status: {}
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: ClusterTask
        metadata:
          creationTimestamp: "2021-09-20T08:50:19Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:steps: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T08:50:19Z"
          name: cluster-task-pipeline-4
          resourceVersion: "1698975"
          selfLink: /apis/tekton.dev/v1beta1/clustertasks/cluster-task-pipeline-4
          uid: 0e1573dd-438c-4fc3-b529-cf1a4415a2f9
        spec:
          steps:
          - args:
            - -c
            - echo success
            command:
            - /bin/bash
            image: ubuntu
            name: task-two-step-one
            resources: {}
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: TaskRun
        metadata:
          creationTimestamp: "2021-09-20T09:29:42Z"
          generation: 1
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/memberOf: tasks
            tekton.dev/pipeline: sample-pipeline-cluster-task-4
            tekton.dev/pipelineRun: demo-pipeline-run-4
            tekton.dev/pipelineTask: cluster-task-pipeline-4
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:labels:
                  .: {}
                  f:tekton.dev/memberOf: {}
                  f:tekton.dev/pipeline: {}
                  f:tekton.dev/pipelineRun: {}
                  f:tekton.dev/pipelineTask: {}
                f:ownerReferences:
                  .: {}
                  k:{"uid":"3524e97d-d1b6-40fa-b22d-6bdd2f916256"}:
                    .: {}
                    f:apiVersion: {}
                    f:blockOwnerDeletion: {}
                    f:controller: {}
                    f:kind: {}
                    f:name: {}
                    f:uid: {}
              f:spec:
                .: {}
                f:resources: {}
                f:serviceAccountName: {}
                f:taskRef:
                  .: {}
                  f:kind: {}
                  f:name: {}
                f:timeout: {}
              f:status:
                .: {}
                f:podName: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:29:42Z"
          name: demo-pipeline-run-4-cluster-task-pipeline-4-fhsq5
          namespace: arendelle-79c66
          ownerReferences:
          - apiVersion: tekton.dev/v1beta1
            blockOwnerDeletion: true
            controller: true
            kind: PipelineRun
            name: demo-pipeline-run-4
            uid: 3524e97d-d1b6-40fa-b22d-6bdd2f916256
          resourceVersion: "1731939"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-79c66/taskruns/demo-pipeline-run-4-cluster-task-pipeline-4-fhsq5
          uid: 1087548f-dbba-4489-8fb7-f7b7fff939f1
        spec:
          resources: {}
          serviceAccountName: default
          taskRef:
            kind: ClusterTask
            name: cluster-task-pipeline-4
          timeout: 1h0m0s
        status:
          podName: ""
        
    panic.go:636: #####################################################
    panic.go:636: ### Dumping logs from Pods in the arendelle-79c66 ###
    panic.go:636: #####################################################
=== CONT  TestExamples/v1alpha1/taskruns/template-volume
    init_test.go:135: Create namespace arendelle-c2x99 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-c2x99"
=== CONT  TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun
    examples_test.go:169: Deleting namespace arendelle-7sm75
=== CONT  TestExamples/v1alpha1/taskruns/sidecar-ready-script
    init_test.go:135: Create namespace arendelle-pwc6s to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-pwc6s"
=== CONT  TestExamples/v1beta1/taskruns/workspace-in-sidecar
    examples_test.go:62: Failed waiting for task run done: "workspace-in-sidecar-hjfgn" failed
    panic.go:636: ############################################
    panic.go:636: ### Dumping objects from arendelle-ccgbk ###
    panic.go:636: ############################################
    panic.go:636: 
        ---
        apiVersion: tekton.dev/v1beta1
        kind: ClusterTask
        metadata:
          creationTimestamp: "2021-09-20T08:50:19Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:steps: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T08:50:19Z"
          name: cluster-task-pipeline-4
          resourceVersion: "1698975"
          selfLink: /apis/tekton.dev/v1beta1/clustertasks/cluster-task-pipeline-4
          uid: 0e1573dd-438c-4fc3-b529-cf1a4415a2f9
        spec:
          steps:
          - args:
            - -c
            - echo success
            command:
            - /bin/bash
            image: ubuntu
            name: task-two-step-one
            resources: {}
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: TaskRun
        metadata:
          annotations:
            pipeline.tekton.dev/release: 9c61cdf
          creationTimestamp: "2021-09-20T09:29:42Z"
          generateName: workspace-in-sidecar-
          generation: 1
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:generateName: {}
              f:spec:
                .: {}
                f:taskSpec:
                  .: {}
                  f:sidecars: {}
                  f:steps: {}
                  f:workspaces: {}
                f:timeout: {}
                f:workspaces: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:29:42Z"
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
              f:status:
                .: {}
                f:completionTime: {}
                f:conditions: {}
                f:podName: {}
                f:startTime: {}
                f:steps: {}
                f:taskSpec:
                  .: {}
                  f:sidecars: {}
                  f:steps: {}
                  f:workspaces: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:30:44Z"
          name: workspace-in-sidecar-hjfgn
          namespace: arendelle-ccgbk
          resourceVersion: "1732725"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-ccgbk/taskruns/workspace-in-sidecar-hjfgn
          uid: bc22edc5-c3bb-4ab4-8c98-6c534e751b58
        spec:
          serviceAccountName: default
          taskSpec:
            sidecars:
            - image: alpine:3.12.0
              name: ""
              resources:
                requests:
                  cpu: 250m
                  memory: 64Mi
              script: |
                #!/usr/bin/env ash
                while [ ! -f "$(workspaces.signals.path)"/bar ] ; do
                  echo "Waiting for $(workspaces.signals.path)/bar"
                  sleep 1
                done
                touch "$(workspaces.signals.path)"/ready
                echo "Wrote ready file"
              volumeMounts:
              - mountPath: $(workspaces.signals.path)
                name: $(workspaces.signals.volume)
            steps:
            - image: alpine:3.12.0
              name: ""
              resources:
                requests:
                  cpu: 250m
                  memory: 64Mi
              script: |
                #!/usr/bin/env ash
                echo "foo" > "$(workspaces.signals.path)"/bar
                echo "Wrote bar file"
                while [ ! -f "$(workspaces.signals.path)"/ready ] ; do
                  echo "Waiting for $(workspaces.signals.path)/ready"
                  sleep 1
                done
                echo "Saw ready file"
            workspaces:
            - name: signals
          timeout: 1m0s
          workspaces:
          - emptyDir: {}
            name: signals
        status:
          completionTime: "2021-09-20T09:30:44Z"
          conditions:
          - lastTransitionTime: "2021-09-20T09:30:44Z"
            message: TaskRun "workspace-in-sidecar-hjfgn" failed to finish within "1m0s"
            reason: TaskRunTimeout
            status: "False"
            type: Succeeded
          podName: workspace-in-sidecar-hjfgn-pod-7vp76
          startTime: "2021-09-20T09:29:42Z"
          steps:
          - container: step-unnamed-0
            name: unnamed-0
            terminated:
              exitCode: 1
              finishedAt: "2021-09-20T09:30:44Z"
              reason: TaskRunTimeout
              startedAt: null
          taskSpec:
            sidecars:
            - image: alpine:3.12.0
              name: ""
              resources:
                requests:
                  cpu: 250m
                  memory: 64Mi
              script: |
                #!/usr/bin/env ash
                while [ ! -f "$(workspaces.signals.path)"/bar ] ; do
                  echo "Waiting for $(workspaces.signals.path)/bar"
                  sleep 1
                done
                touch "$(workspaces.signals.path)"/ready
                echo "Wrote ready file"
              volumeMounts:
              - mountPath: $(workspaces.signals.path)
                name: $(workspaces.signals.volume)
            steps:
            - image: alpine:3.12.0
              name: ""
              resources:
                requests:
                  cpu: 250m
                  memory: 64Mi
              script: |
                #!/usr/bin/env ash
                echo "foo" > "$(workspaces.signals.path)"/bar
                echo "Wrote bar file"
                while [ ! -f "$(workspaces.signals.path)"/ready ] ; do
                  echo "Waiting for $(workspaces.signals.path)/ready"
                  sleep 1
                done
                echo "Saw ready file"
            workspaces:
            - name: signals
        
        ---
        metadata:
          annotations:
            cni.projectcalico.org/containerID: 1cd4822b833659da02632ecb7e27b8344d780b4f201055233dd91694b2bced98
            cni.projectcalico.org/podIP: 172.20.64.25/32
            cni.projectcalico.org/podIPs: 172.20.64.25/32
            pipeline.tekton.dev/release: 9c61cdf
          creationTimestamp: "2021-09-20T09:29:42Z"
          deletionGracePeriodSeconds: 30
          deletionTimestamp: "2021-09-20T09:31:12Z"
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/taskRun: workspace-in-sidecar-hjfgn
          managedFields:
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
                f:labels:
                  .: {}
                  f:app.kubernetes.io/managed-by: {}
                  f:tekton.dev/taskRun: {}
                f:ownerReferences:
                  .: {}
                  k:{"uid":"bc22edc5-c3bb-4ab4-8c98-6c534e751b58"}:
                    .: {}
                    f:apiVersion: {}
                    f:blockOwnerDeletion: {}
                    f:controller: {}
                    f:kind: {}
                    f:name: {}
                    f:uid: {}
              f:spec:
                f:activeDeadlineSeconds: {}
                f:containers:
                  k:{"name":"sidecar"}:
                    .: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/scripts"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                        f:readOnly: {}
                      k:{"mountPath":"/workspace/signals"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                  k:{"name":"step-unnamed-0"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/downward"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/scripts"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                        f:readOnly: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace/signals"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                f:dnsPolicy: {}
                f:enableServiceLinks: {}
                f:initContainers:
                  .: {}
                  k:{"name":"place-scripts"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/scripts"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                  k:{"name":"place-tools"}:
                    .: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                f:restartPolicy: {}
                f:schedulerName: {}
                f:securityContext: {}
                f:serviceAccount: {}
                f:serviceAccountName: {}
                f:terminationGracePeriodSeconds: {}
                f:volumes:
                  .: {}
                  k:{"name":"tekton-creds-init-home-0"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-internal-downward"}:
                    .: {}
                    f:downwardAPI:
                      .: {}
                      f:defaultMode: {}
                      f:items: {}
                    f:name: {}
                  k:{"name":"tekton-internal-home"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-results"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-scripts"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-steps"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-tools"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-workspace"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"ws-28r7w"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:29:42Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  f:cni.projectcalico.org/containerID: {}
                  f:cni.projectcalico.org/podIP: {}
                  f:cni.projectcalico.org/podIPs: {}
            manager: calico
            operation: Update
            time: "2021-09-20T09:29:47Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:status:
                f:conditions:
                  k:{"type":"ContainersReady"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:message: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Initialized"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:message: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Ready"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:message: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                f:containerStatuses: {}
                f:hostIP: {}
                f:initContainerStatuses: {}
                f:podIP: {}
                f:podIPs:
                  .: {}
                  k:{"ip":"172.20.64.25"}:
                    .: {}
                    f:ip: {}
                f:startTime: {}
            manager: kubelet
            operation: Update
            time: "2021-09-20T09:29:52Z"
          name: workspace-in-sidecar-hjfgn-pod-7vp76
          namespace: arendelle-ccgbk
          ownerReferences:
          - apiVersion: tekton.dev/v1beta1
            blockOwnerDeletion: true
            controller: true
            kind: TaskRun
            name: workspace-in-sidecar-hjfgn
            uid: bc22edc5-c3bb-4ab4-8c98-6c534e751b58
          resourceVersion: "1732711"
          selfLink: /api/v1/namespaces/arendelle-ccgbk/pods/workspace-in-sidecar-hjfgn-pod-7vp76
          uid: 311437e3-8360-4530-8409-0bf378597b8a
        spec:
          activeDeadlineSeconds: 90
          containers:
          - args:
            - -wait_file
            - /tekton/downward/ready
            - -wait_file_content
            - -post_file
            - /tekton/tools/0
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-unnamed-0
            - -step_metadata_dir_link
            - /tekton/steps/0
            - -entrypoint
            - /tekton/scripts/script-0-7s89v
            - --
            command:
            - /tekton/tools/entrypoint
            image: alpine:3.12.0
            imagePullPolicy: IfNotPresent
            name: step-unnamed-0
            resources:
              requests:
                cpu: 250m
                ephemeral-storage: "0"
                memory: 64Mi
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /workspace/signals
              name: ws-28r7w
            - mountPath: /tekton/scripts
              name: tekton-internal-scripts
              readOnly: true
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/downward
              name: tekton-internal-downward
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-0
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-w9sh6
              readOnly: true
          - command:
            - /tekton/scripts/sidecar-script-0-xzgr2
            image: alpine:3.12.0
            imagePullPolicy: IfNotPresent
            name: sidecar
            resources:
              requests:
                cpu: 250m
                memory: 64Mi
            terminationMessagePath: /dev/termination-log
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /workspace/signals
              name: ws-28r7w
            - mountPath: /tekton/scripts
              name: tekton-internal-scripts
              readOnly: true
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-w9sh6
              readOnly: true
          dnsPolicy: ClusterFirst
          enableServiceLinks: true
          initContainers:
          - command:
            - /ko-app/entrypoint
            - cp
            - /ko-app/entrypoint
            - /tekton/tools/entrypoint
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            imagePullPolicy: IfNotPresent
            name: place-tools
            resources: {}
            terminationMessagePath: /dev/termination-log
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-w9sh6
              readOnly: true
            workingDir: /
          - args:
            - -c
            - |
              scriptfile="/tekton/scripts/script-0-7s89v"
              touch ${scriptfile} && chmod +x ${scriptfile}
              cat > ${scriptfile} << '_EOF_'
              IyEvdXNyL2Jpbi9lbnYgYXNoCmVjaG8gImZvbyIgPiAiL3dvcmtzcGFjZS9zaWduYWxzIi9iYXIKZWNobyAiV3JvdGUgYmFyIGZpbGUiCndoaWxlIFsgISAtZiAiL3dvcmtzcGFjZS9zaWduYWxzIi9yZWFkeSBdIDsgZG8KICBlY2hvICJXYWl0aW5nIGZvciAvd29ya3NwYWNlL3NpZ25hbHMvcmVhZHkiCiAgc2xlZXAgMQpkb25lCmVjaG8gIlNhdyByZWFkeSBmaWxlIgo=
              _EOF_
              /tekton/tools/entrypoint decode-script "${scriptfile}"
              scriptfile="/tekton/scripts/sidecar-script-0-xzgr2"
              touch ${scriptfile} && chmod +x ${scriptfile}
              cat > ${scriptfile} << '_EOF_'
              IyEvdXNyL2Jpbi9lbnYgYXNoCndoaWxlIFsgISAtZiAiL3dvcmtzcGFjZS9zaWduYWxzIi9iYXIgXSA7IGRvCiAgZWNobyAiV2FpdGluZyBmb3IgL3dvcmtzcGFjZS9zaWduYWxzL2JhciIKICBzbGVlcCAxCmRvbmUKdG91Y2ggIi93b3Jrc3BhY2Uvc2lnbmFscyIvcmVhZHkKZWNobyAiV3JvdGUgcmVhZHkgZmlsZSIK
              _EOF_
              /tekton/tools/entrypoint decode-script "${scriptfile}"
            command:
            - sh
            image: gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            imagePullPolicy: IfNotPresent
            name: place-scripts
            resources: {}
            terminationMessagePath: /dev/termination-log
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/scripts
              name: tekton-internal-scripts
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-w9sh6
              readOnly: true
          nodeName: snat-vm1
          preemptionPolicy: PreemptLowerPriority
          priority: 0
          restartPolicy: Never
          schedulerName: default-scheduler
          securityContext: {}
          serviceAccount: default
          serviceAccountName: default
          terminationGracePeriodSeconds: 30
          tolerations:
          - effect: NoExecute
            key: node.kubernetes.io/not-ready
            operator: Exists
            tolerationSeconds: 300
          - effect: NoExecute
            key: node.kubernetes.io/unreachable
            operator: Exists
            tolerationSeconds: 300
          volumes:
          - emptyDir: {}
            name: tekton-internal-workspace
          - emptyDir: {}
            name: tekton-internal-home
          - emptyDir: {}
            name: tekton-internal-results
          - emptyDir: {}
            name: tekton-internal-steps
          - emptyDir: {}
            name: tekton-internal-scripts
          - emptyDir: {}
            name: tekton-internal-tools
          - downwardAPI:
              defaultMode: 420
              items:
              - fieldRef:
                  apiVersion: v1
                  fieldPath: metadata.annotations['tekton.dev/ready']
                path: ready
            name: tekton-internal-downward
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-0
          - emptyDir: {}
            name: ws-28r7w
          - name: default-token-w9sh6
            secret:
              defaultMode: 420
              secretName: default-token-w9sh6
        status:
          conditions:
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:42Z"
            message: 'containers with incomplete status: [place-scripts]'
            reason: ContainersNotInitialized
            status: "False"
            type: Initialized
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:42Z"
            message: 'containers with unready status: [step-unnamed-0 sidecar]'
            reason: ContainersNotReady
            status: "False"
            type: Ready
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:42Z"
            message: 'containers with unready status: [step-unnamed-0 sidecar]'
            reason: ContainersNotReady
            status: "False"
            type: ContainersReady
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:42Z"
            status: "True"
            type: PodScheduled
          containerStatuses:
          - image: alpine:3.12.0
            imageID: ""
            lastState: {}
            name: sidecar
            ready: false
            restartCount: 0
            started: false
            state:
              waiting:
                reason: PodInitializing
          - image: alpine:3.12.0
            imageID: ""
            lastState: {}
            name: step-unnamed-0
            ready: false
            restartCount: 0
            started: false
            state:
              waiting:
                reason: PodInitializing
          hostIP: 192.168.100.196
          initContainerStatuses:
          - containerID: docker://b0c7f970195bf1e3711e43ef6f8d59da528b2e66385886b8d54322b3571f76a9
            image: sha256:d070f203876e5761802c781f19abcca89e4f28a13752a22284260530834012be
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            lastState: {}
            name: place-tools
            ready: true
            restartCount: 0
            state:
              terminated:
                containerID: docker://b0c7f970195bf1e3711e43ef6f8d59da528b2e66385886b8d54322b3571f76a9
                exitCode: 0
                finishedAt: "2021-09-20T09:29:50Z"
                reason: Completed
                startedAt: "2021-09-20T09:29:50Z"
          - image: gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            imageID: ""
            lastState: {}
            name: place-scripts
            ready: false
            restartCount: 0
            state:
              waiting:
                reason: PodInitializing
          phase: Pending
          podIP: 172.20.64.25
          podIPs:
          - ip: 172.20.64.25
          qosClass: Burstable
          startTime: "2021-09-20T09:29:42Z"
        
    panic.go:636: #####################################################
    panic.go:636: ### Dumping logs from Pods in the arendelle-ccgbk ###
    panic.go:636: #####################################################
    build_logs.go:35: Could not get logs for pod workspace-in-sidecar-hjfgn-pod-7vp76: container "step-unnamed-0" in pod "workspace-in-sidecar-hjfgn-pod-7vp76" is waiting to start: PodInitializing
    build_logs.go:37: build logs 
=== CONT  TestExamples/v1alpha1/taskruns/sidecar-interp
    init_test.go:135: Create namespace arendelle-fj98c to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-fj98c"
=== CONT  TestExamples/v1alpha1/taskruns/step-by-digest
    examples_test.go:169: Deleting namespace arendelle-hpn97
=== CONT  TestExamples/v1alpha1/taskruns/secret-volume
    init_test.go:135: Create namespace arendelle-kxqz5 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-kxqz5"
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun
    examples_test.go:55: Failed waiting for pipeline run done: "demo-pipeline-run-1" failed
    panic.go:636: ############################################
    panic.go:636: ### Dumping objects from arendelle-ckkbw ###
    panic.go:636: ############################################
    panic.go:636: 
        ---
        apiVersion: tekton.dev/v1beta1
        kind: Pipeline
        metadata:
          creationTimestamp: "2021-09-20T09:27:54Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:resources: {}
                f:tasks: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:27:54Z"
          name: demo-pipeline
          namespace: arendelle-ckkbw
          resourceVersion: "1730516"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-ckkbw/pipelines/demo-pipeline
          uid: 2af5ee7c-1247-42cd-b5f8-8b5fcb34d413
        spec:
          resources:
          - name: source-repo
            type: git
          - name: web-image
            type: image
          - name: app-image
            type: image
          tasks:
          - name: skaffold-unit-tests
            resources:
              inputs:
              - name: workspace
                resource: source-repo
            taskRef:
              kind: Task
              name: unit-tests
          - name: build-skaffold-web
            params:
            - name: pathToDockerFile
              value: Dockerfile
            - name: pathToContext
              value: /workspace/workspace/examples/microservices/leeroy-web
            resources:
              inputs:
              - name: workspace
                resource: source-repo
              outputs:
              - name: builtImage
                resource: web-image
            runAfter:
            - skaffold-unit-tests
            taskRef:
              kind: Task
              name: build-push
          - name: build-skaffold-app
            params:
            - name: pathToDockerFile
              value: Dockerfile
            - name: pathToContext
              value: /workspace/workspace/examples/microservices/leeroy-app
            resources:
              inputs:
              - name: workspace
                resource: source-repo
              outputs:
              - name: builtImage
                resource: app-image
            runAfter:
            - skaffold-unit-tests
            taskRef:
              kind: Task
              name: build-push
          - name: deploy-app
            params:
            - name: path
              value: /workspace/workspace/examples/microservices/leeroy-app/kubernetes/deployment.yaml
            - name: yqArg
              value: -d1
            - name: yamlPathToImage
              value: spec.template.spec.containers[0].image
            resources:
              inputs:
              - name: workspace
                resource: source-repo
              - from:
                - build-skaffold-app
                name: image
                resource: app-image
            taskRef:
              kind: Task
              name: demo-deploy-kubectl
          - name: deploy-web
            params:
            - name: path
              value: /workspace/workspace/examples/microservices/leeroy-web/kubernetes/deployment.yaml
            - name: yqArg
              value: -d1
            - name: yamlPathToImage
              value: spec.template.spec.containers[0].image
            resources:
              inputs:
              - name: workspace
                resource: source-repo
              - from:
                - build-skaffold-web
                name: image
                resource: web-image
            taskRef:
              kind: Task
              name: demo-deploy-kubectl
        
        ---
        apiVersion: tekton.dev/v1alpha1
        kind: PipelineResource
        metadata:
          creationTimestamp: "2021-09-20T09:27:53Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:params: {}
                f:type: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:27:53Z"
          name: skaffold-git-pipelinerun
          namespace: arendelle-ckkbw
          resourceVersion: "1730512"
          selfLink: /apis/tekton.dev/v1alpha1/namespaces/arendelle-ckkbw/pipelineresources/skaffold-git-pipelinerun
          uid: 0d33c6a6-36ff-44dd-87bf-0cf7b2b12fef
        spec:
          params:
          - name: revision
            value: v0.32.0
          - name: url
            value: https://github.com/GoogleContainerTools/skaffold
          type: git
        
        ---
        apiVersion: tekton.dev/v1alpha1
        kind: PipelineResource
        metadata:
          creationTimestamp: "2021-09-20T09:27:53Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:params: {}
                f:type: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:27:53Z"
          name: skaffold-image-leeroy-app
          namespace: arendelle-ckkbw
          resourceVersion: "1730508"
          selfLink: /apis/tekton.dev/v1alpha1/namespaces/arendelle-ckkbw/pipelineresources/skaffold-image-leeroy-app
          uid: 49c6099b-5fa4-4fa3-bfe2-21375e070e6a
        spec:
          params:
          - name: url
            value: ppc64le-cluster.bastion-p.svc.cluster.local:443/leeroy-app
          type: image
        
        ---
        apiVersion: tekton.dev/v1alpha1
        kind: PipelineResource
        metadata:
          creationTimestamp: "2021-09-20T09:27:53Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:params: {}
                f:type: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:27:53Z"
          name: skaffold-image-leeroy-web-pipelinerun
          namespace: arendelle-ckkbw
          resourceVersion: "1730511"
          selfLink: /apis/tekton.dev/v1alpha1/namespaces/arendelle-ckkbw/pipelineresources/skaffold-image-leeroy-web-pipelinerun
          uid: b674c577-246f-44d0-bc2c-14dce6198bd1
        spec:
          params:
          - name: url
            value: ppc64le-cluster.bastion-p.svc.cluster.local:443/leeroy-web
          type: image
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: PipelineRun
        metadata:
          creationTimestamp: "2021-09-20T09:27:54Z"
          generation: 1
          labels:
            tekton.dev/pipeline: demo-pipeline
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:pipelineRef:
                  .: {}
                  f:name: {}
                f:resources: {}
                f:serviceAccountName: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:27:54Z"
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:labels:
                  .: {}
                  f:tekton.dev/pipeline: {}
              f:status:
                f:completionTime: {}
                f:conditions: {}
                f:pipelineSpec:
                  .: {}
                  f:resources: {}
                  f:tasks: {}
                f:skippedTasks: {}
                f:startTime: {}
                f:taskRuns:
                  .: {}
                  f:demo-pipeline-run-1-build-skaffold-app-dk44q:
                    .: {}
                    f:pipelineTaskName: {}
                    f:status:
                      .: {}
                      f:completionTime: {}
                      f:conditions: {}
                      f:podName: {}
                      f:startTime: {}
                      f:steps: {}
                      f:taskSpec:
                        .: {}
                        f:params: {}
                        f:resources:
                          .: {}
                          f:inputs: {}
                          f:outputs: {}
                        f:steps: {}
                  f:demo-pipeline-run-1-build-skaffold-web-lpl2z:
                    .: {}
                    f:pipelineTaskName: {}
                    f:status:
                      .: {}
                      f:completionTime: {}
                      f:conditions: {}
                      f:podName: {}
                      f:startTime: {}
                      f:steps: {}
                      f:taskSpec:
                        .: {}
                        f:params: {}
                        f:resources:
                          .: {}
                          f:inputs: {}
                          f:outputs: {}
                        f:steps: {}
                  f:demo-pipeline-run-1-skaffold-unit-tests-jnk48:
                    .: {}
                    f:pipelineTaskName: {}
                    f:status:
                      .: {}
                      f:completionTime: {}
                      f:conditions: {}
                      f:podName: {}
                      f:resourcesResult: {}
                      f:startTime: {}
                      f:steps: {}
                      f:taskSpec:
                        .: {}
                        f:resources:
                          .: {}
                          f:inputs: {}
                        f:steps: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:31:14Z"
          name: demo-pipeline-run-1
          namespace: arendelle-ckkbw
          resourceVersion: "1732980"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-ckkbw/pipelineruns/demo-pipeline-run-1
          uid: d04b0b05-dd1b-4712-9343-b804298e850b
        spec:
          pipelineRef:
            name: demo-pipeline
          resources:
          - name: source-repo
            resourceRef:
              name: skaffold-git-pipelinerun
          - name: web-image
            resourceRef:
              name: skaffold-image-leeroy-web-pipelinerun
          - name: app-image
            resourceRef:
              name: skaffold-image-leeroy-app
          serviceAccountName: default
          timeout: 1h0m0s
        status:
          completionTime: "2021-09-20T09:31:14Z"
          conditions:
          - lastTransitionTime: "2021-09-20T09:31:14Z"
            message: 'Tasks Completed: 3 (Failed: 2, Cancelled 0), Skipped: 2'
            reason: Failed
            status: "False"
            type: Succeeded
          pipelineSpec:
            resources:
            - name: source-repo
              type: git
            - name: web-image
              type: image
            - name: app-image
              type: image
            tasks:
            - name: skaffold-unit-tests
              resources:
                inputs:
                - name: workspace
                  resource: source-repo
              taskRef:
                kind: Task
                name: unit-tests
            - name: build-skaffold-web
              params:
              - name: pathToDockerFile
                value: Dockerfile
              - name: pathToContext
                value: /workspace/workspace/examples/microservices/leeroy-web
              resources:
                inputs:
                - name: workspace
                  resource: source-repo
                outputs:
                - name: builtImage
                  resource: web-image
              runAfter:
              - skaffold-unit-tests
              taskRef:
                kind: Task
                name: build-push
            - name: build-skaffold-app
              params:
              - name: pathToDockerFile
                value: Dockerfile
              - name: pathToContext
                value: /workspace/workspace/examples/microservices/leeroy-app
              resources:
                inputs:
                - name: workspace
                  resource: source-repo
                outputs:
                - name: builtImage
                  resource: app-image
              runAfter:
              - skaffold-unit-tests
              taskRef:
                kind: Task
                name: build-push
            - name: deploy-app
              params:
              - name: path
                value: /workspace/workspace/examples/microservices/leeroy-app/kubernetes/deployment.yaml
              - name: yqArg
                value: -d1
              - name: yamlPathToImage
                value: spec.template.spec.containers[0].image
              resources:
                inputs:
                - name: workspace
                  resource: source-repo
                - from:
                  - build-skaffold-app
                  name: image
                  resource: app-image
              taskRef:
                kind: Task
                name: demo-deploy-kubectl
            - name: deploy-web
              params:
              - name: path
                value: /workspace/workspace/examples/microservices/leeroy-web/kubernetes/deployment.yaml
              - name: yqArg
                value: -d1
              - name: yamlPathToImage
                value: spec.template.spec.containers[0].image
              resources:
                inputs:
                - name: workspace
                  resource: source-repo
                - from:
                  - build-skaffold-web
                  name: image
                  resource: web-image
              taskRef:
                kind: Task
                name: demo-deploy-kubectl
          skippedTasks:
          - name: deploy-app
          - name: deploy-web
          startTime: "2021-09-20T09:27:54Z"
          taskRuns:
            demo-pipeline-run-1-build-skaffold-app-dk44q:
              pipelineTaskName: build-skaffold-app
              status:
                completionTime: "2021-09-20T09:31:14Z"
                conditions:
                - lastTransitionTime: "2021-09-20T09:31:14Z"
                  message: |
                    "step-build-and-push" exited with code 1 (image: "docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e"); for logs run: kubectl -n arendelle-ckkbw logs demo-pipeline-run-1-build-skaffold-app-dk44q-pod-frnkl -c step-build-and-push
                  reason: Failed
                  status: "False"
                  type: Succeeded
                podName: demo-pipeline-run-1-build-skaffold-app-dk44q-pod-frnkl
                startTime: "2021-09-20T09:29:02Z"
                steps:
                - container: step-create-dir-builtimage-vkb2g
                  imageID: docker-pullable://gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
                  name: create-dir-builtimage-vkb2g
                  terminated:
                    containerID: docker://b2765f23e01cb2632f4cfaeb65c41e75dddeaa6c8282cd0e809fd7d3f6e82074
                    exitCode: 0
                    finishedAt: "2021-09-20T09:29:50Z"
                    reason: Completed
                    startedAt: "2021-09-20T09:29:50Z"
                - container: step-git-source-workspace-2ptjp
                  imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
                  name: git-source-workspace-2ptjp
                  terminated:
                    containerID: docker://891426c0a8a2602919adf26dd0bfc6472f0923a27aeaf1848b5dc365493668c1
                    exitCode: 0
                    finishedAt: "2021-09-20T09:30:02Z"
                    message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}}]'
                    reason: Completed
                    startedAt: "2021-09-20T09:29:51Z"
                - container: step-build-and-push
                  imageID: docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e
                  name: build-and-push
                  terminated:
                    containerID: docker://664423f12ef57d6595989c612ca685d2c8c0fe3a18d7e42375c57cf0f2e31bcd
                    exitCode: 1
                    finishedAt: "2021-09-20T09:31:08Z"
                    reason: Error
                    startedAt: "2021-09-20T09:30:02Z"
                - container: step-image-digest-exporter-xwd74
                  imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
                  name: image-digest-exporter-xwd74
                  terminated:
                    containerID: docker://31192dd4ee2bc935fa1d527f3c4d0291fee17f953af5cdbf1e539feff3cb3a1f
                    exitCode: 1
                    finishedAt: "2021-09-20T09:31:08Z"
                    reason: Error
                    startedAt: "2021-09-20T09:31:07Z"
                taskSpec:
                  params:
                  - default: /workspace/workspace/Dockerfile
                    description: The path to the dockerfile to build
                    name: pathToDockerFile
                    type: string
                  - default: /workspace/workspace
                    description: The build context used by Kaniko (https://github.com/GoogleContainerTools/kaniko#kaniko-build-contexts)
                    name: pathToContext
                    type: string
                  resources:
                    inputs:
                    - name: workspace
                      type: git
                    outputs:
                    - name: builtImage
                      type: image
                  steps:
                  - args:
                    - --dockerfile=$(inputs.params.pathToDockerFile)
                    - --destination=$(outputs.resources.builtImage.url)
                    - --context=$(inputs.params.pathToContext)
                    command:
                    - /kaniko/executor
                    env:
                    - name: DOCKER_CONFIG
                      value: /tekton/home/.docker/
                    image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
                    name: build-and-push
                    resources: {}
            demo-pipeline-run-1-build-skaffold-web-lpl2z:
              pipelineTaskName: build-skaffold-web
              status:
                completionTime: "2021-09-20T09:31:13Z"
                conditions:
                - lastTransitionTime: "2021-09-20T09:31:13Z"
                  message: |
                    "step-build-and-push" exited with code 1 (image: "docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e"); for logs run: kubectl -n arendelle-ckkbw logs demo-pipeline-run-1-build-skaffold-web-lpl2z-pod-tjnmh -c step-build-and-push
                  reason: Failed
                  status: "False"
                  type: Succeeded
                podName: demo-pipeline-run-1-build-skaffold-web-lpl2z-pod-tjnmh
                startTime: "2021-09-20T09:28:55Z"
                steps:
                - container: step-create-dir-builtimage-846f9
                  imageID: docker-pullable://gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
                  name: create-dir-builtimage-846f9
                  terminated:
                    containerID: docker://53ab124a548c3350f43435cab14ef9b97cf85992e3f9f2e4fda3da97c45e7adc
                    exitCode: 0
                    finishedAt: "2021-09-20T09:29:47Z"
                    reason: Completed
                    startedAt: "2021-09-20T09:29:46Z"
                - container: step-git-source-workspace-2nlh7
                  imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
                  name: git-source-workspace-2nlh7
                  terminated:
                    containerID: docker://1f2703536065e3879d811dfb65bc0f7792e5ff51a419d2b96e1845e0f0a7a55a
                    exitCode: 0
                    finishedAt: "2021-09-20T09:29:59Z"
                    message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}}]'
                    reason: Completed
                    startedAt: "2021-09-20T09:29:47Z"
                - container: step-build-and-push
                  imageID: docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e
                  name: build-and-push
                  terminated:
                    containerID: docker://0e967b2fdd99f423463a87e6eeb9fc57dbdd8307bfc41f325902317d305c5a6c
                    exitCode: 1
                    finishedAt: "2021-09-20T09:31:08Z"
                    reason: Error
                    startedAt: "2021-09-20T09:29:58Z"
                - container: step-image-digest-exporter-mr7p2
                  imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
                  name: image-digest-exporter-mr7p2
                  terminated:
                    containerID: docker://6ed389ac848a3dce3348f24055751ac9aaa190fcfbabee75dca1ad70092245cc
                    exitCode: 1
                    finishedAt: "2021-09-20T09:31:08Z"
                    reason: Error
                    startedAt: "2021-09-20T09:31:06Z"
                taskSpec:
                  params:
                  - default: /workspace/workspace/Dockerfile
                    description: The path to the dockerfile to build
                    name: pathToDockerFile
                    type: string
                  - default: /workspace/workspace
                    description: The build context used by Kaniko (https://github.com/GoogleContainerTools/kaniko#kaniko-build-contexts)
                    name: pathToContext
                    type: string
                  resources:
                    inputs:
                    - name: workspace
                      type: git
                    outputs:
                    - name: builtImage
                      type: image
                  steps:
                  - args:
                    - --dockerfile=$(inputs.params.pathToDockerFile)
                    - --destination=$(outputs.resources.builtImage.url)
                    - --context=$(inputs.params.pathToContext)
                    command:
                    - /kaniko/executor
                    env:
                    - name: DOCKER_CONFIG
                      value: /tekton/home/.docker/
                    image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
                    name: build-and-push
                    resources: {}
            demo-pipeline-run-1-skaffold-unit-tests-jnk48:
              pipelineTaskName: skaffold-unit-tests
              status:
                completionTime: "2021-09-20T09:28:55Z"
                conditions:
                - lastTransitionTime: "2021-09-20T09:28:55Z"
                  message: All Steps have completed executing
                  reason: Succeeded
                  status: "True"
                  type: Succeeded
                podName: demo-pipeline-run-1-skaffold-unit-tests-jnk48-pod-kghhc
                resourcesResult:
                - key: commit
                  resourceName: workspace
                  resourceRef:
                    name: workspace
                  value: 6ed7aad5e8a36052ee5f6079fc91368e362121f7
                - key: url
                  resourceName: workspace
                  resourceRef:
                    name: workspace
                  value: https://github.com/GoogleContainerTools/skaffold
                startTime: "2021-09-20T09:27:54Z"
                steps:
                - container: step-git-source-workspace-gfbdz
                  imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
                  name: git-source-workspace-gfbdz
                  terminated:
                    containerID: docker://723332a10d224b403e1bbb7e714283e65c6f5ee3e35d25091b4d29d54c234afd
                    exitCode: 0
                    finishedAt: "2021-09-20T09:28:36Z"
                    message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}}]'
                    reason: Completed
                    startedAt: "2021-09-20T09:28:25Z"
                - container: step-run-tests
                  imageID: docker-pullable://golang@sha256:285cf0cb73ab995caee61b900b2be123cd198f3541ce318c549ea5ff9832bdf0
                  name: run-tests
                  terminated:
                    containerID: docker://df52677a6a69ad45c15ea1517d847b777a2fe332b18e8db2fd3ba8381db53b87
                    exitCode: 0
                    finishedAt: "2021-09-20T09:28:36Z"
                    reason: Completed
                    startedAt: "2021-09-20T09:28:35Z"
                taskSpec:
                  resources:
                    inputs:
                    - name: workspace
                      targetPath: go/src/github.com/GoogleContainerTools/skaffold
                      type: git
                  steps:
                  - args:
                    - pass
                    command:
                    - echo
                    env:
                    - name: GOPATH
                      value: /workspace/go
                    image: golang
                    name: run-tests
                    resources: {}
                    workingDir: /workspace/go/src/github.com/GoogleContainerTools/skaffold
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: Task
        metadata:
          creationTimestamp: "2021-09-20T09:27:54Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:inputs:
                  .: {}
                  f:params: {}
                  f:resources: {}
                f:outputs:
                  .: {}
                  f:resources: {}
                f:steps: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:27:54Z"
          name: build-push
          namespace: arendelle-ckkbw
          resourceVersion: "1730514"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-ckkbw/tasks/build-push
          uid: e8ba5ae7-0dbc-4041-9813-3c02d0503abf
        spec:
          params:
          - default: /workspace/workspace/Dockerfile
            description: The path to the dockerfile to build
            name: pathToDockerFile
            type: string
          - default: /workspace/workspace
            description: The build context used by Kaniko (https://github.com/GoogleContainerTools/kaniko#kaniko-build-contexts)
            name: pathToContext
            type: string
          resources:
            inputs:
            - name: workspace
              type: git
            outputs:
            - name: builtImage
              type: image
          steps:
          - args:
            - --dockerfile=$(inputs.params.pathToDockerFile)
            - --destination=$(outputs.resources.builtImage.url)
            - --context=$(inputs.params.pathToContext)
            command:
            - /kaniko/executor
            env:
            - name: DOCKER_CONFIG
              value: /tekton/home/.docker/
            image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
            name: build-and-push
            resources: {}
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: Task
        metadata:
          creationTimestamp: "2021-09-20T09:27:54Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:inputs:
                  .: {}
                  f:params: {}
                  f:resources: {}
                f:steps: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:27:54Z"
          name: demo-deploy-kubectl
          namespace: arendelle-ckkbw
          resourceVersion: "1730515"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-ckkbw/tasks/demo-deploy-kubectl
          uid: 6af66e86-8029-4e67-b99e-668c54e010e5
        spec:
          params:
          - description: Path to the manifest to apply
            name: path
            type: string
          - description: Okay this is a hack, but I didn't feel right hard-codeing `-d1` down
              below
            name: yqArg
            type: string
          - description: The path to the image to replace in the yaml manifest (arg to yq)
            name: yamlPathToImage
            type: string
          resources:
            inputs:
            - name: workspace
              type: git
            - name: image
              type: image
          steps:
          - args:
            - w
            - -i
            - $(inputs.params.yqArg)
            - $(inputs.params.path)
            - $(inputs.params.yamlPathToImage)
            - $(inputs.resources.image.url)
            command:
            - yq
            image: danielxlee/yq:2.4.0
            name: replace-image
            resources: {}
          - args:
            - apply
            - -f
            - $(inputs.params.path)
            command:
            - kubectl
            image: lachlanevenson/k8s-kubectl
            name: run-kubectl
            resources: {}
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: Task
        metadata:
          creationTimestamp: "2021-09-20T09:27:53Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1alpha1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:inputs:
                  .: {}
                  f:resources: {}
                f:steps: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T09:27:53Z"
          name: unit-tests
          namespace: arendelle-ckkbw
          resourceVersion: "1730513"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-ckkbw/tasks/unit-tests
          uid: 32a44d40-7d55-4f48-9e2a-70474e03c0a8
        spec:
          resources:
            inputs:
            - name: workspace
              targetPath: go/src/github.com/GoogleContainerTools/skaffold
              type: git
          steps:
          - args:
            - pass
            command:
            - echo
            env:
            - name: GOPATH
              value: /workspace/go
            image: golang
            name: run-tests
            resources: {}
            workingDir: /workspace/go/src/github.com/GoogleContainerTools/skaffold
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: ClusterTask
        metadata:
          creationTimestamp: "2021-09-20T08:50:19Z"
          generation: 1
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:spec:
                .: {}
                f:steps: {}
            manager: kubectl-create
            operation: Update
            time: "2021-09-20T08:50:19Z"
          name: cluster-task-pipeline-4
          resourceVersion: "1698975"
          selfLink: /apis/tekton.dev/v1beta1/clustertasks/cluster-task-pipeline-4
          uid: 0e1573dd-438c-4fc3-b529-cf1a4415a2f9
        spec:
          steps:
          - args:
            - -c
            - echo success
            command:
            - /bin/bash
            image: ubuntu
            name: task-two-step-one
            resources: {}
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: TaskRun
        metadata:
          annotations:
            pipeline.tekton.dev/release: 9c61cdf
          creationTimestamp: "2021-09-20T09:28:55Z"
          generation: 1
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/memberOf: tasks
            tekton.dev/pipeline: demo-pipeline
            tekton.dev/pipelineRun: demo-pipeline-run-1
            tekton.dev/pipelineTask: build-skaffold-app
            tekton.dev/task: build-push
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
                f:labels:
                  .: {}
                  f:tekton.dev/memberOf: {}
                  f:tekton.dev/pipeline: {}
                  f:tekton.dev/pipelineRun: {}
                  f:tekton.dev/pipelineTask: {}
                  f:tekton.dev/task: {}
                f:ownerReferences:
                  .: {}
                  k:{"uid":"d04b0b05-dd1b-4712-9343-b804298e850b"}:
                    .: {}
                    f:apiVersion: {}
                    f:blockOwnerDeletion: {}
                    f:controller: {}
                    f:kind: {}
                    f:name: {}
                    f:uid: {}
              f:spec:
                .: {}
                f:params: {}
                f:resources:
                  .: {}
                  f:inputs: {}
                  f:outputs: {}
                f:serviceAccountName: {}
                f:taskRef:
                  .: {}
                  f:kind: {}
                  f:name: {}
                f:timeout: {}
              f:status:
                .: {}
                f:completionTime: {}
                f:conditions: {}
                f:podName: {}
                f:startTime: {}
                f:steps: {}
                f:taskSpec:
                  .: {}
                  f:params: {}
                  f:resources:
                    .: {}
                    f:inputs: {}
                    f:outputs: {}
                  f:steps: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:31:14Z"
          name: demo-pipeline-run-1-build-skaffold-app-dk44q
          namespace: arendelle-ckkbw
          ownerReferences:
          - apiVersion: tekton.dev/v1beta1
            blockOwnerDeletion: true
            controller: true
            kind: PipelineRun
            name: demo-pipeline-run-1
            uid: d04b0b05-dd1b-4712-9343-b804298e850b
          resourceVersion: "1732972"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-ckkbw/taskruns/demo-pipeline-run-1-build-skaffold-app-dk44q
          uid: 110cf6a9-a4bc-4f77-83b5-8901e67cfc0a
        spec:
          params:
          - name: pathToDockerFile
            value: Dockerfile
          - name: pathToContext
            value: /workspace/workspace/examples/microservices/leeroy-app
          resources:
            inputs:
            - name: workspace
              resourceRef:
                name: skaffold-git-pipelinerun
            outputs:
            - name: builtImage
              paths:
              - build-skaffold-app/builtImage
              resourceRef:
                name: skaffold-image-leeroy-app
          serviceAccountName: default
          taskRef:
            kind: Task
            name: build-push
          timeout: 1h0m0s
        status:
          completionTime: "2021-09-20T09:31:14Z"
          conditions:
          - lastTransitionTime: "2021-09-20T09:31:14Z"
            message: |
              "step-build-and-push" exited with code 1 (image: "docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e"); for logs run: kubectl -n arendelle-ckkbw logs demo-pipeline-run-1-build-skaffold-app-dk44q-pod-frnkl -c step-build-and-push
            reason: Failed
            status: "False"
            type: Succeeded
          podName: demo-pipeline-run-1-build-skaffold-app-dk44q-pod-frnkl
          startTime: "2021-09-20T09:29:02Z"
          steps:
          - container: step-create-dir-builtimage-vkb2g
            imageID: docker-pullable://gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            name: create-dir-builtimage-vkb2g
            terminated:
              containerID: docker://b2765f23e01cb2632f4cfaeb65c41e75dddeaa6c8282cd0e809fd7d3f6e82074
              exitCode: 0
              finishedAt: "2021-09-20T09:29:50Z"
              reason: Completed
              startedAt: "2021-09-20T09:29:50Z"
          - container: step-git-source-workspace-2ptjp
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            name: git-source-workspace-2ptjp
            terminated:
              containerID: docker://891426c0a8a2602919adf26dd0bfc6472f0923a27aeaf1848b5dc365493668c1
              exitCode: 0
              finishedAt: "2021-09-20T09:30:02Z"
              message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}}]'
              reason: Completed
              startedAt: "2021-09-20T09:29:51Z"
          - container: step-build-and-push
            imageID: docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e
            name: build-and-push
            terminated:
              containerID: docker://664423f12ef57d6595989c612ca685d2c8c0fe3a18d7e42375c57cf0f2e31bcd
              exitCode: 1
              finishedAt: "2021-09-20T09:31:08Z"
              reason: Error
              startedAt: "2021-09-20T09:30:02Z"
          - container: step-image-digest-exporter-xwd74
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
            name: image-digest-exporter-xwd74
            terminated:
              containerID: docker://31192dd4ee2bc935fa1d527f3c4d0291fee17f953af5cdbf1e539feff3cb3a1f
              exitCode: 1
              finishedAt: "2021-09-20T09:31:08Z"
              reason: Error
              startedAt: "2021-09-20T09:31:07Z"
          taskSpec:
            params:
            - default: /workspace/workspace/Dockerfile
              description: The path to the dockerfile to build
              name: pathToDockerFile
              type: string
            - default: /workspace/workspace
              description: The build context used by Kaniko (https://github.com/GoogleContainerTools/kaniko#kaniko-build-contexts)
              name: pathToContext
              type: string
            resources:
              inputs:
              - name: workspace
                type: git
              outputs:
              - name: builtImage
                type: image
            steps:
            - args:
              - --dockerfile=$(inputs.params.pathToDockerFile)
              - --destination=$(outputs.resources.builtImage.url)
              - --context=$(inputs.params.pathToContext)
              command:
              - /kaniko/executor
              env:
              - name: DOCKER_CONFIG
                value: /tekton/home/.docker/
              image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
              name: build-and-push
              resources: {}
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: TaskRun
        metadata:
          annotations:
            pipeline.tekton.dev/release: 9c61cdf
          creationTimestamp: "2021-09-20T09:28:55Z"
          generation: 1
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/memberOf: tasks
            tekton.dev/pipeline: demo-pipeline
            tekton.dev/pipelineRun: demo-pipeline-run-1
            tekton.dev/pipelineTask: build-skaffold-web
            tekton.dev/task: build-push
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
                f:labels:
                  .: {}
                  f:tekton.dev/memberOf: {}
                  f:tekton.dev/pipeline: {}
                  f:tekton.dev/pipelineRun: {}
                  f:tekton.dev/pipelineTask: {}
                  f:tekton.dev/task: {}
                f:ownerReferences:
                  .: {}
                  k:{"uid":"d04b0b05-dd1b-4712-9343-b804298e850b"}:
                    .: {}
                    f:apiVersion: {}
                    f:blockOwnerDeletion: {}
                    f:controller: {}
                    f:kind: {}
                    f:name: {}
                    f:uid: {}
              f:spec:
                .: {}
                f:params: {}
                f:resources:
                  .: {}
                  f:inputs: {}
                  f:outputs: {}
                f:serviceAccountName: {}
                f:taskRef:
                  .: {}
                  f:kind: {}
                  f:name: {}
                f:timeout: {}
              f:status:
                .: {}
                f:completionTime: {}
                f:conditions: {}
                f:podName: {}
                f:startTime: {}
                f:steps: {}
                f:taskSpec:
                  .: {}
                  f:params: {}
                  f:resources:
                    .: {}
                    f:inputs: {}
                    f:outputs: {}
                  f:steps: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:31:13Z"
          name: demo-pipeline-run-1-build-skaffold-web-lpl2z
          namespace: arendelle-ckkbw
          ownerReferences:
          - apiVersion: tekton.dev/v1beta1
            blockOwnerDeletion: true
            controller: true
            kind: PipelineRun
            name: demo-pipeline-run-1
            uid: d04b0b05-dd1b-4712-9343-b804298e850b
          resourceVersion: "1732962"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-ckkbw/taskruns/demo-pipeline-run-1-build-skaffold-web-lpl2z
          uid: 032c877e-ee6a-40ca-94eb-e3c2c990e18f
        spec:
          params:
          - name: pathToDockerFile
            value: Dockerfile
          - name: pathToContext
            value: /workspace/workspace/examples/microservices/leeroy-web
          resources:
            inputs:
            - name: workspace
              resourceRef:
                name: skaffold-git-pipelinerun
            outputs:
            - name: builtImage
              paths:
              - build-skaffold-web/builtImage
              resourceRef:
                name: skaffold-image-leeroy-web-pipelinerun
          serviceAccountName: default
          taskRef:
            kind: Task
            name: build-push
          timeout: 1h0m0s
        status:
          completionTime: "2021-09-20T09:31:13Z"
          conditions:
          - lastTransitionTime: "2021-09-20T09:31:13Z"
            message: |
              "step-build-and-push" exited with code 1 (image: "docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e"); for logs run: kubectl -n arendelle-ckkbw logs demo-pipeline-run-1-build-skaffold-web-lpl2z-pod-tjnmh -c step-build-and-push
            reason: Failed
            status: "False"
            type: Succeeded
          podName: demo-pipeline-run-1-build-skaffold-web-lpl2z-pod-tjnmh
          startTime: "2021-09-20T09:28:55Z"
          steps:
          - container: step-create-dir-builtimage-846f9
            imageID: docker-pullable://gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            name: create-dir-builtimage-846f9
            terminated:
              containerID: docker://53ab124a548c3350f43435cab14ef9b97cf85992e3f9f2e4fda3da97c45e7adc
              exitCode: 0
              finishedAt: "2021-09-20T09:29:47Z"
              reason: Completed
              startedAt: "2021-09-20T09:29:46Z"
          - container: step-git-source-workspace-2nlh7
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            name: git-source-workspace-2nlh7
            terminated:
              containerID: docker://1f2703536065e3879d811dfb65bc0f7792e5ff51a419d2b96e1845e0f0a7a55a
              exitCode: 0
              finishedAt: "2021-09-20T09:29:59Z"
              message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}}]'
              reason: Completed
              startedAt: "2021-09-20T09:29:47Z"
          - container: step-build-and-push
            imageID: docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e
            name: build-and-push
            terminated:
              containerID: docker://0e967b2fdd99f423463a87e6eeb9fc57dbdd8307bfc41f325902317d305c5a6c
              exitCode: 1
              finishedAt: "2021-09-20T09:31:08Z"
              reason: Error
              startedAt: "2021-09-20T09:29:58Z"
          - container: step-image-digest-exporter-mr7p2
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
            name: image-digest-exporter-mr7p2
            terminated:
              containerID: docker://6ed389ac848a3dce3348f24055751ac9aaa190fcfbabee75dca1ad70092245cc
              exitCode: 1
              finishedAt: "2021-09-20T09:31:08Z"
              reason: Error
              startedAt: "2021-09-20T09:31:06Z"
          taskSpec:
            params:
            - default: /workspace/workspace/Dockerfile
              description: The path to the dockerfile to build
              name: pathToDockerFile
              type: string
            - default: /workspace/workspace
              description: The build context used by Kaniko (https://github.com/GoogleContainerTools/kaniko#kaniko-build-contexts)
              name: pathToContext
              type: string
            resources:
              inputs:
              - name: workspace
                type: git
              outputs:
              - name: builtImage
                type: image
            steps:
            - args:
              - --dockerfile=$(inputs.params.pathToDockerFile)
              - --destination=$(outputs.resources.builtImage.url)
              - --context=$(inputs.params.pathToContext)
              command:
              - /kaniko/executor
              env:
              - name: DOCKER_CONFIG
                value: /tekton/home/.docker/
              image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
              name: build-and-push
              resources: {}
        
        ---
        apiVersion: tekton.dev/v1beta1
        kind: TaskRun
        metadata:
          annotations:
            pipeline.tekton.dev/release: 9c61cdf
          creationTimestamp: "2021-09-20T09:27:54Z"
          generation: 1
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/memberOf: tasks
            tekton.dev/pipeline: demo-pipeline
            tekton.dev/pipelineRun: demo-pipeline-run-1
            tekton.dev/pipelineTask: skaffold-unit-tests
            tekton.dev/task: unit-tests
          managedFields:
          - apiVersion: tekton.dev/v1beta1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
                f:labels:
                  .: {}
                  f:tekton.dev/memberOf: {}
                  f:tekton.dev/pipeline: {}
                  f:tekton.dev/pipelineRun: {}
                  f:tekton.dev/pipelineTask: {}
                  f:tekton.dev/task: {}
                f:ownerReferences:
                  .: {}
                  k:{"uid":"d04b0b05-dd1b-4712-9343-b804298e850b"}:
                    .: {}
                    f:apiVersion: {}
                    f:blockOwnerDeletion: {}
                    f:controller: {}
                    f:kind: {}
                    f:name: {}
                    f:uid: {}
              f:spec:
                .: {}
                f:resources:
                  .: {}
                  f:inputs: {}
                f:serviceAccountName: {}
                f:taskRef:
                  .: {}
                  f:kind: {}
                  f:name: {}
                f:timeout: {}
              f:status:
                .: {}
                f:completionTime: {}
                f:conditions: {}
                f:podName: {}
                f:resourcesResult: {}
                f:startTime: {}
                f:steps: {}
                f:taskSpec:
                  .: {}
                  f:resources:
                    .: {}
                    f:inputs: {}
                  f:steps: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:28:55Z"
          name: demo-pipeline-run-1-skaffold-unit-tests-jnk48
          namespace: arendelle-ckkbw
          ownerReferences:
          - apiVersion: tekton.dev/v1beta1
            blockOwnerDeletion: true
            controller: true
            kind: PipelineRun
            name: demo-pipeline-run-1
            uid: d04b0b05-dd1b-4712-9343-b804298e850b
          resourceVersion: "1731407"
          selfLink: /apis/tekton.dev/v1beta1/namespaces/arendelle-ckkbw/taskruns/demo-pipeline-run-1-skaffold-unit-tests-jnk48
          uid: 5a3c4b07-f245-492c-bcc7-3cf4ba6de431
        spec:
          resources:
            inputs:
            - name: workspace
              resourceRef:
                name: skaffold-git-pipelinerun
          serviceAccountName: default
          taskRef:
            kind: Task
            name: unit-tests
          timeout: 1h0m0s
        status:
          completionTime: "2021-09-20T09:28:55Z"
          conditions:
          - lastTransitionTime: "2021-09-20T09:28:55Z"
            message: All Steps have completed executing
            reason: Succeeded
            status: "True"
            type: Succeeded
          podName: demo-pipeline-run-1-skaffold-unit-tests-jnk48-pod-kghhc
          resourcesResult:
          - key: commit
            resourceName: workspace
            resourceRef:
              name: workspace
            value: 6ed7aad5e8a36052ee5f6079fc91368e362121f7
          - key: url
            resourceName: workspace
            resourceRef:
              name: workspace
            value: https://github.com/GoogleContainerTools/skaffold
          startTime: "2021-09-20T09:27:54Z"
          steps:
          - container: step-git-source-workspace-gfbdz
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            name: git-source-workspace-gfbdz
            terminated:
              containerID: docker://723332a10d224b403e1bbb7e714283e65c6f5ee3e35d25091b4d29d54c234afd
              exitCode: 0
              finishedAt: "2021-09-20T09:28:36Z"
              message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}}]'
              reason: Completed
              startedAt: "2021-09-20T09:28:25Z"
          - container: step-run-tests
            imageID: docker-pullable://golang@sha256:285cf0cb73ab995caee61b900b2be123cd198f3541ce318c549ea5ff9832bdf0
            name: run-tests
            terminated:
              containerID: docker://df52677a6a69ad45c15ea1517d847b777a2fe332b18e8db2fd3ba8381db53b87
              exitCode: 0
              finishedAt: "2021-09-20T09:28:36Z"
              reason: Completed
              startedAt: "2021-09-20T09:28:35Z"
          taskSpec:
            resources:
              inputs:
              - name: workspace
                targetPath: go/src/github.com/GoogleContainerTools/skaffold
                type: git
            steps:
            - args:
              - pass
              command:
              - echo
              env:
              - name: GOPATH
                value: /workspace/go
              image: golang
              name: run-tests
              resources: {}
              workingDir: /workspace/go/src/github.com/GoogleContainerTools/skaffold
        
        ---
        metadata:
          annotations:
            cni.projectcalico.org/containerID: 3794fe32dc3f7e059bc2417e055b62f1afa5cb53d0447b97795d76f51712b2d9
            cni.projectcalico.org/podIP: ""
            cni.projectcalico.org/podIPs: ""
            pipeline.tekton.dev/release: 9c61cdf
            tekton.dev/ready: READY
          creationTimestamp: "2021-09-20T09:28:56Z"
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/memberOf: tasks
            tekton.dev/pipeline: demo-pipeline
            tekton.dev/pipelineRun: demo-pipeline-run-1
            tekton.dev/pipelineTask: build-skaffold-app
            tekton.dev/task: build-push
            tekton.dev/taskRun: demo-pipeline-run-1-build-skaffold-app-dk44q
          managedFields:
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
                  f:tekton.dev/ready: {}
                f:labels:
                  .: {}
                  f:app.kubernetes.io/managed-by: {}
                  f:tekton.dev/memberOf: {}
                  f:tekton.dev/pipeline: {}
                  f:tekton.dev/pipelineRun: {}
                  f:tekton.dev/pipelineTask: {}
                  f:tekton.dev/task: {}
                  f:tekton.dev/taskRun: {}
                f:ownerReferences:
                  .: {}
                  k:{"uid":"110cf6a9-a4bc-4f77-83b5-8901e67cfc0a"}:
                    .: {}
                    f:apiVersion: {}
                    f:blockOwnerDeletion: {}
                    f:controller: {}
                    f:kind: {}
                    f:name: {}
                    f:uid: {}
              f:spec:
                f:activeDeadlineSeconds: {}
                f:containers:
                  k:{"name":"step-build-and-push"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:env:
                      .: {}
                      k:{"name":"DOCKER_CONFIG"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                  k:{"name":"step-create-dir-builtimage-vkb2g"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/downward"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                  k:{"name":"step-git-source-workspace-2ptjp"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:env:
                      .: {}
                      k:{"name":"HOME"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                      k:{"name":"TEKTON_RESOURCE_NAME"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                  k:{"name":"step-image-digest-exporter-xwd74"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                f:dnsPolicy: {}
                f:enableServiceLinks: {}
                f:initContainers:
                  .: {}
                  k:{"name":"place-tools"}:
                    .: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                f:restartPolicy: {}
                f:schedulerName: {}
                f:securityContext: {}
                f:serviceAccount: {}
                f:serviceAccountName: {}
                f:terminationGracePeriodSeconds: {}
                f:volumes:
                  .: {}
                  k:{"name":"tekton-creds-init-home-0"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-1"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-2"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-3"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-internal-downward"}:
                    .: {}
                    f:downwardAPI:
                      .: {}
                      f:defaultMode: {}
                      f:items: {}
                    f:name: {}
                  k:{"name":"tekton-internal-home"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-results"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-steps"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-tools"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-workspace"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:29:45Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  f:cni.projectcalico.org/containerID: {}
                  f:cni.projectcalico.org/podIP: {}
                  f:cni.projectcalico.org/podIPs: {}
            manager: calico
            operation: Update
            time: "2021-09-20T09:31:14Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:status:
                f:conditions:
                  k:{"type":"ContainersReady"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:message: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Initialized"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Ready"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:message: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                f:containerStatuses: {}
                f:hostIP: {}
                f:initContainerStatuses: {}
                f:phase: {}
                f:podIP: {}
                f:podIPs:
                  .: {}
                  k:{"ip":"172.20.64.11"}:
                    .: {}
                    f:ip: {}
                f:startTime: {}
            manager: kubelet
            operation: Update
            time: "2021-09-20T09:31:14Z"
          name: demo-pipeline-run-1-build-skaffold-app-dk44q-pod-frnkl
          namespace: arendelle-ckkbw
          ownerReferences:
          - apiVersion: tekton.dev/v1beta1
            blockOwnerDeletion: true
            controller: true
            kind: TaskRun
            name: demo-pipeline-run-1-build-skaffold-app-dk44q
            uid: 110cf6a9-a4bc-4f77-83b5-8901e67cfc0a
          resourceVersion: "1732974"
          selfLink: /api/v1/namespaces/arendelle-ckkbw/pods/demo-pipeline-run-1-build-skaffold-app-dk44q-pod-frnkl
          uid: 9ea3ba34-1ac6-484f-bf16-d660416c68ef
        spec:
          activeDeadlineSeconds: 5400
          containers:
          - args:
            - -wait_file
            - /tekton/downward/ready
            - -wait_file_content
            - -post_file
            - /tekton/tools/0
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-create-dir-builtimage-vkb2g
            - -step_metadata_dir_link
            - /tekton/steps/0
            - -entrypoint
            - mkdir
            - --
            - -p
            - /workspace/output/builtImage
            command:
            - /tekton/tools/entrypoint
            image: gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            imagePullPolicy: IfNotPresent
            name: step-create-dir-builtimage-vkb2g
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/downward
              name: tekton-internal-downward
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-0
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
          - args:
            - -wait_file
            - /tekton/tools/0
            - -post_file
            - /tekton/tools/1
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-git-source-workspace-2ptjp
            - -step_metadata_dir_link
            - /tekton/steps/1
            - -entrypoint
            - /ko-app/git-init
            - --
            - -url
            - https://github.com/GoogleContainerTools/skaffold
            - -path
            - /workspace/workspace
            - -revision
            - v0.32.0
            command:
            - /tekton/tools/entrypoint
            env:
            - name: TEKTON_RESOURCE_NAME
              value: workspace
            - name: HOME
              value: /tekton/home
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            imagePullPolicy: IfNotPresent
            name: step-git-source-workspace-2ptjp
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-1
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
            workingDir: /workspace
          - args:
            - -wait_file
            - /tekton/tools/1
            - -post_file
            - /tekton/tools/2
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-build-and-push
            - -step_metadata_dir_link
            - /tekton/steps/2
            - -entrypoint
            - /kaniko/executor
            - --
            - --dockerfile=Dockerfile
            - --destination=ppc64le-cluster.bastion-p.svc.cluster.local:443/leeroy-app
            - --context=/workspace/workspace/examples/microservices/leeroy-app
            command:
            - /tekton/tools/entrypoint
            env:
            - name: DOCKER_CONFIG
              value: /tekton/home/.docker/
            image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
            imagePullPolicy: IfNotPresent
            name: step-build-and-push
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-2
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
          - args:
            - -wait_file
            - /tekton/tools/2
            - -post_file
            - /tekton/tools/3
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-image-digest-exporter-xwd74
            - -step_metadata_dir_link
            - /tekton/steps/3
            - -entrypoint
            - /ko-app/imagedigestexporter
            - --
            - -images
            - '[{"name":"builtImage","type":"image","url":"ppc64le-cluster.bastion-p.svc.cluster.local:443/leeroy-app","digest":"","OutputImageDir":"/workspace/output/builtImage"}]'
            command:
            - /tekton/tools/entrypoint
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
            imagePullPolicy: IfNotPresent
            name: step-image-digest-exporter-xwd74
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-3
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
          dnsPolicy: ClusterFirst
          enableServiceLinks: true
          initContainers:
          - command:
            - /ko-app/entrypoint
            - cp
            - /ko-app/entrypoint
            - /tekton/tools/entrypoint
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            imagePullPolicy: IfNotPresent
            name: place-tools
            resources: {}
            terminationMessagePath: /dev/termination-log
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
            workingDir: /
          nodeName: snat-vm1
          preemptionPolicy: PreemptLowerPriority
          priority: 0
          restartPolicy: Never
          schedulerName: default-scheduler
          securityContext: {}
          serviceAccount: default
          serviceAccountName: default
          terminationGracePeriodSeconds: 30
          tolerations:
          - effect: NoExecute
            key: node.kubernetes.io/not-ready
            operator: Exists
            tolerationSeconds: 300
          - effect: NoExecute
            key: node.kubernetes.io/unreachable
            operator: Exists
            tolerationSeconds: 300
          volumes:
          - emptyDir: {}
            name: tekton-internal-workspace
          - emptyDir: {}
            name: tekton-internal-home
          - emptyDir: {}
            name: tekton-internal-results
          - emptyDir: {}
            name: tekton-internal-steps
          - emptyDir: {}
            name: tekton-internal-tools
          - downwardAPI:
              defaultMode: 420
              items:
              - fieldRef:
                  apiVersion: v1
                  fieldPath: metadata.annotations['tekton.dev/ready']
                path: ready
            name: tekton-internal-downward
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-0
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-1
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-2
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-3
          - name: default-token-wjm8q
            secret:
              defaultMode: 420
              secretName: default-token-wjm8q
        status:
          conditions:
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:36Z"
            status: "True"
            type: Initialized
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:53Z"
            message: 'containers with unready status: [step-create-dir-builtimage-vkb2g step-git-source-workspace-2ptjp
              step-build-and-push step-image-digest-exporter-xwd74]'
            reason: ContainersNotReady
            status: "False"
            type: Ready
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:53Z"
            message: 'containers with unready status: [step-create-dir-builtimage-vkb2g step-git-source-workspace-2ptjp
              step-build-and-push step-image-digest-exporter-xwd74]'
            reason: ContainersNotReady
            status: "False"
            type: ContainersReady
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:27Z"
            status: "True"
            type: PodScheduled
          containerStatuses:
          - containerID: docker://664423f12ef57d6595989c612ca685d2c8c0fe3a18d7e42375c57cf0f2e31bcd
            image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
            imageID: docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e
            lastState: {}
            name: step-build-and-push
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://664423f12ef57d6595989c612ca685d2c8c0fe3a18d7e42375c57cf0f2e31bcd
                exitCode: 1
                finishedAt: "2021-09-20T09:31:08Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:30:02.184Z","type":"InternalTektonResult"}]'
                reason: Error
                startedAt: "2021-09-20T09:29:41Z"
          - containerID: docker://b2765f23e01cb2632f4cfaeb65c41e75dddeaa6c8282cd0e809fd7d3f6e82074
            image: sha256:2b725792e3b49e8cfdc1214f355219693d58ac02ef3751cfaa451da71a46f29d
            imageID: docker-pullable://gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            lastState: {}
            name: step-create-dir-builtimage-vkb2g
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://b2765f23e01cb2632f4cfaeb65c41e75dddeaa6c8282cd0e809fd7d3f6e82074
                exitCode: 0
                finishedAt: "2021-09-20T09:29:50Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:29:50.778Z","type":"InternalTektonResult"}]'
                reason: Completed
                startedAt: "2021-09-20T09:29:37Z"
          - containerID: docker://891426c0a8a2602919adf26dd0bfc6472f0923a27aeaf1848b5dc365493668c1
            image: sha256:4a0cc10c5831fdd70d05d21ffb7a004be9894a284a91d0c5425981c71ea3f42a
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            lastState: {}
            name: step-git-source-workspace-2ptjp
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://891426c0a8a2602919adf26dd0bfc6472f0923a27aeaf1848b5dc365493668c1
                exitCode: 0
                finishedAt: "2021-09-20T09:30:02Z"
                message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"StartedAt","value":"2021-09-20T09:29:51.477Z","type":"InternalTektonResult"}]'
                reason: Completed
                startedAt: "2021-09-20T09:29:38Z"
          - containerID: docker://31192dd4ee2bc935fa1d527f3c4d0291fee17f953af5cdbf1e539feff3cb3a1f
            image: sha256:e982e3b9e7b7a15a626dc64643ff196c76d7b665fdf23293296d4aa450a28c40
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
            lastState: {}
            name: step-image-digest-exporter-xwd74
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://31192dd4ee2bc935fa1d527f3c4d0291fee17f953af5cdbf1e539feff3cb3a1f
                exitCode: 1
                finishedAt: "2021-09-20T09:31:08Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:31:07.477Z","type":"InternalTektonResult"}]'
                reason: Error
                startedAt: "2021-09-20T09:29:42Z"
          hostIP: 192.168.100.196
          initContainerStatuses:
          - containerID: docker://a65749cf0ddddbb61899784ca45a250ac7299daff2824e50213d4d1d8652bf12
            image: sha256:d070f203876e5761802c781f19abcca89e4f28a13752a22284260530834012be
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            lastState: {}
            name: place-tools
            ready: true
            restartCount: 0
            state:
              terminated:
                containerID: docker://a65749cf0ddddbb61899784ca45a250ac7299daff2824e50213d4d1d8652bf12
                exitCode: 0
                finishedAt: "2021-09-20T09:29:36Z"
                reason: Completed
                startedAt: "2021-09-20T09:29:35Z"
          phase: Failed
          podIP: 172.20.64.11
          podIPs:
          - ip: 172.20.64.11
          qosClass: BestEffort
          startTime: "2021-09-20T09:29:28Z"
        
        ---
        metadata:
          annotations:
            cni.projectcalico.org/containerID: b4dba71fa3524725b0814e37efb21b3478e5b2dc36ff9eacdda3f1ea9810431b
            cni.projectcalico.org/podIP: ""
            cni.projectcalico.org/podIPs: ""
            pipeline.tekton.dev/release: 9c61cdf
            tekton.dev/ready: READY
          creationTimestamp: "2021-09-20T09:28:56Z"
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/memberOf: tasks
            tekton.dev/pipeline: demo-pipeline
            tekton.dev/pipelineRun: demo-pipeline-run-1
            tekton.dev/pipelineTask: build-skaffold-web
            tekton.dev/task: build-push
            tekton.dev/taskRun: demo-pipeline-run-1-build-skaffold-web-lpl2z
          managedFields:
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
                  f:tekton.dev/ready: {}
                f:labels:
                  .: {}
                  f:app.kubernetes.io/managed-by: {}
                  f:tekton.dev/memberOf: {}
                  f:tekton.dev/pipeline: {}
                  f:tekton.dev/pipelineRun: {}
                  f:tekton.dev/pipelineTask: {}
                  f:tekton.dev/task: {}
                  f:tekton.dev/taskRun: {}
                f:ownerReferences:
                  .: {}
                  k:{"uid":"032c877e-ee6a-40ca-94eb-e3c2c990e18f"}:
                    .: {}
                    f:apiVersion: {}
                    f:blockOwnerDeletion: {}
                    f:controller: {}
                    f:kind: {}
                    f:name: {}
                    f:uid: {}
              f:spec:
                f:activeDeadlineSeconds: {}
                f:containers:
                  k:{"name":"step-build-and-push"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:env:
                      .: {}
                      k:{"name":"DOCKER_CONFIG"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                  k:{"name":"step-create-dir-builtimage-846f9"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/downward"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                  k:{"name":"step-git-source-workspace-2nlh7"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:env:
                      .: {}
                      k:{"name":"HOME"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                      k:{"name":"TEKTON_RESOURCE_NAME"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                  k:{"name":"step-image-digest-exporter-mr7p2"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                f:dnsPolicy: {}
                f:enableServiceLinks: {}
                f:initContainers:
                  .: {}
                  k:{"name":"place-tools"}:
                    .: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                f:restartPolicy: {}
                f:schedulerName: {}
                f:securityContext: {}
                f:serviceAccount: {}
                f:serviceAccountName: {}
                f:terminationGracePeriodSeconds: {}
                f:volumes:
                  .: {}
                  k:{"name":"tekton-creds-init-home-0"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-1"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-2"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-3"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-internal-downward"}:
                    .: {}
                    f:downwardAPI:
                      .: {}
                      f:defaultMode: {}
                      f:items: {}
                    f:name: {}
                  k:{"name":"tekton-internal-home"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-results"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-steps"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-tools"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-workspace"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:29:44Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  f:cni.projectcalico.org/containerID: {}
                  f:cni.projectcalico.org/podIP: {}
                  f:cni.projectcalico.org/podIPs: {}
            manager: calico
            operation: Update
            time: "2021-09-20T09:31:13Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:status:
                f:conditions:
                  k:{"type":"ContainersReady"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:message: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Initialized"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Ready"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:message: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                f:containerStatuses: {}
                f:hostIP: {}
                f:initContainerStatuses: {}
                f:phase: {}
                f:podIP: {}
                f:podIPs:
                  .: {}
                  k:{"ip":"172.20.64.2"}:
                    .: {}
                    f:ip: {}
                f:startTime: {}
            manager: kubelet
            operation: Update
            time: "2021-09-20T09:31:13Z"
          name: demo-pipeline-run-1-build-skaffold-web-lpl2z-pod-tjnmh
          namespace: arendelle-ckkbw
          ownerReferences:
          - apiVersion: tekton.dev/v1beta1
            blockOwnerDeletion: true
            controller: true
            kind: TaskRun
            name: demo-pipeline-run-1-build-skaffold-web-lpl2z
            uid: 032c877e-ee6a-40ca-94eb-e3c2c990e18f
          resourceVersion: "1732961"
          selfLink: /api/v1/namespaces/arendelle-ckkbw/pods/demo-pipeline-run-1-build-skaffold-web-lpl2z-pod-tjnmh
          uid: 45ef6195-783f-4c58-89ed-d480472175b2
        spec:
          activeDeadlineSeconds: 5400
          containers:
          - args:
            - -wait_file
            - /tekton/downward/ready
            - -wait_file_content
            - -post_file
            - /tekton/tools/0
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-create-dir-builtimage-846f9
            - -step_metadata_dir_link
            - /tekton/steps/0
            - -entrypoint
            - mkdir
            - --
            - -p
            - /workspace/output/builtImage
            command:
            - /tekton/tools/entrypoint
            image: gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            imagePullPolicy: IfNotPresent
            name: step-create-dir-builtimage-846f9
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/downward
              name: tekton-internal-downward
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-0
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
          - args:
            - -wait_file
            - /tekton/tools/0
            - -post_file
            - /tekton/tools/1
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-git-source-workspace-2nlh7
            - -step_metadata_dir_link
            - /tekton/steps/1
            - -entrypoint
            - /ko-app/git-init
            - --
            - -url
            - https://github.com/GoogleContainerTools/skaffold
            - -path
            - /workspace/workspace
            - -revision
            - v0.32.0
            command:
            - /tekton/tools/entrypoint
            env:
            - name: TEKTON_RESOURCE_NAME
              value: workspace
            - name: HOME
              value: /tekton/home
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            imagePullPolicy: IfNotPresent
            name: step-git-source-workspace-2nlh7
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-1
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
            workingDir: /workspace
          - args:
            - -wait_file
            - /tekton/tools/1
            - -post_file
            - /tekton/tools/2
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-build-and-push
            - -step_metadata_dir_link
            - /tekton/steps/2
            - -entrypoint
            - /kaniko/executor
            - --
            - --dockerfile=Dockerfile
            - --destination=ppc64le-cluster.bastion-p.svc.cluster.local:443/leeroy-web
            - --context=/workspace/workspace/examples/microservices/leeroy-web
            command:
            - /tekton/tools/entrypoint
            env:
            - name: DOCKER_CONFIG
              value: /tekton/home/.docker/
            image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
            imagePullPolicy: IfNotPresent
            name: step-build-and-push
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-2
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
          - args:
            - -wait_file
            - /tekton/tools/2
            - -post_file
            - /tekton/tools/3
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-image-digest-exporter-mr7p2
            - -step_metadata_dir_link
            - /tekton/steps/3
            - -entrypoint
            - /ko-app/imagedigestexporter
            - --
            - -images
            - '[{"name":"builtImage","type":"image","url":"ppc64le-cluster.bastion-p.svc.cluster.local:443/leeroy-web","digest":"","OutputImageDir":"/workspace/output/builtImage"}]'
            command:
            - /tekton/tools/entrypoint
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
            imagePullPolicy: IfNotPresent
            name: step-image-digest-exporter-mr7p2
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-3
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
          dnsPolicy: ClusterFirst
          enableServiceLinks: true
          initContainers:
          - command:
            - /ko-app/entrypoint
            - cp
            - /ko-app/entrypoint
            - /tekton/tools/entrypoint
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            imagePullPolicy: IfNotPresent
            name: place-tools
            resources: {}
            terminationMessagePath: /dev/termination-log
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
            workingDir: /
          nodeName: snat-vm1
          preemptionPolicy: PreemptLowerPriority
          priority: 0
          restartPolicy: Never
          schedulerName: default-scheduler
          securityContext: {}
          serviceAccount: default
          serviceAccountName: default
          terminationGracePeriodSeconds: 30
          tolerations:
          - effect: NoExecute
            key: node.kubernetes.io/not-ready
            operator: Exists
            tolerationSeconds: 300
          - effect: NoExecute
            key: node.kubernetes.io/unreachable
            operator: Exists
            tolerationSeconds: 300
          volumes:
          - emptyDir: {}
            name: tekton-internal-workspace
          - emptyDir: {}
            name: tekton-internal-home
          - emptyDir: {}
            name: tekton-internal-results
          - emptyDir: {}
            name: tekton-internal-steps
          - emptyDir: {}
            name: tekton-internal-tools
          - downwardAPI:
              defaultMode: 420
              items:
              - fieldRef:
                  apiVersion: v1
                  fieldPath: metadata.annotations['tekton.dev/ready']
                path: ready
            name: tekton-internal-downward
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-0
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-1
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-2
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-3
          - name: default-token-wjm8q
            secret:
              defaultMode: 420
              secretName: default-token-wjm8q
        status:
          conditions:
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:36Z"
            status: "True"
            type: Initialized
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:51Z"
            message: 'containers with unready status: [step-create-dir-builtimage-846f9 step-git-source-workspace-2nlh7
              step-build-and-push step-image-digest-exporter-mr7p2]'
            reason: ContainersNotReady
            status: "False"
            type: Ready
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:51Z"
            message: 'containers with unready status: [step-create-dir-builtimage-846f9 step-git-source-workspace-2nlh7
              step-build-and-push step-image-digest-exporter-mr7p2]'
            reason: ContainersNotReady
            status: "False"
            type: ContainersReady
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:29:27Z"
            status: "True"
            type: PodScheduled
          containerStatuses:
          - containerID: docker://0e967b2fdd99f423463a87e6eeb9fc57dbdd8307bfc41f325902317d305c5a6c
            image: ibmcom/kaniko-project-executor-ppc64le:v0.17.1
            imageID: docker-pullable://ibmcom/kaniko-project-executor-ppc64le@sha256:12b70da4fd0a89d103e12c0d7900ae416995f13229e2aea8919fd15e52dfa76e
            lastState: {}
            name: step-build-and-push
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://0e967b2fdd99f423463a87e6eeb9fc57dbdd8307bfc41f325902317d305c5a6c
                exitCode: 1
                finishedAt: "2021-09-20T09:31:08Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:29:58.989Z","type":"InternalTektonResult"}]'
                reason: Error
                startedAt: "2021-09-20T09:29:38Z"
          - containerID: docker://53ab124a548c3350f43435cab14ef9b97cf85992e3f9f2e4fda3da97c45e7adc
            image: sha256:2b725792e3b49e8cfdc1214f355219693d58ac02ef3751cfaa451da71a46f29d
            imageID: docker-pullable://gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            lastState: {}
            name: step-create-dir-builtimage-846f9
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://53ab124a548c3350f43435cab14ef9b97cf85992e3f9f2e4fda3da97c45e7adc
                exitCode: 0
                finishedAt: "2021-09-20T09:29:47Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:29:46.988Z","type":"InternalTektonResult"}]'
                reason: Completed
                startedAt: "2021-09-20T09:29:36Z"
          - containerID: docker://1f2703536065e3879d811dfb65bc0f7792e5ff51a419d2b96e1845e0f0a7a55a
            image: sha256:4a0cc10c5831fdd70d05d21ffb7a004be9894a284a91d0c5425981c71ea3f42a
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            lastState: {}
            name: step-git-source-workspace-2nlh7
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://1f2703536065e3879d811dfb65bc0f7792e5ff51a419d2b96e1845e0f0a7a55a
                exitCode: 0
                finishedAt: "2021-09-20T09:29:59Z"
                message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"StartedAt","value":"2021-09-20T09:29:47.012Z","type":"InternalTektonResult"}]'
                reason: Completed
                startedAt: "2021-09-20T09:29:37Z"
          - containerID: docker://6ed389ac848a3dce3348f24055751ac9aaa190fcfbabee75dca1ad70092245cc
            image: sha256:e982e3b9e7b7a15a626dc64643ff196c76d7b665fdf23293296d4aa450a28c40
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/imagedigestexporter-6e7c518e6125f31761ebe0b96cc63971@sha256:301f59d033191befcbe254fbf0169e57ca7082c77a37ea2d522483fccd5fc826
            lastState: {}
            name: step-image-digest-exporter-mr7p2
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://6ed389ac848a3dce3348f24055751ac9aaa190fcfbabee75dca1ad70092245cc
                exitCode: 1
                finishedAt: "2021-09-20T09:31:08Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:31:06.862Z","type":"InternalTektonResult"}]'
                reason: Error
                startedAt: "2021-09-20T09:29:41Z"
          hostIP: 192.168.100.196
          initContainerStatuses:
          - containerID: docker://63cba8a0266dc6650f96780dbbad9e3669f875c54f9aca6ff791670befe3cfb6
            image: sha256:d070f203876e5761802c781f19abcca89e4f28a13752a22284260530834012be
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            lastState: {}
            name: place-tools
            ready: true
            restartCount: 0
            state:
              terminated:
                containerID: docker://63cba8a0266dc6650f96780dbbad9e3669f875c54f9aca6ff791670befe3cfb6
                exitCode: 0
                finishedAt: "2021-09-20T09:29:35Z"
                reason: Completed
                startedAt: "2021-09-20T09:29:34Z"
          phase: Failed
          podIP: 172.20.64.2
          podIPs:
          - ip: 172.20.64.2
          qosClass: BestEffort
          startTime: "2021-09-20T09:29:27Z"
        
        ---
        metadata:
          annotations:
            cni.projectcalico.org/containerID: 6a6f5cabf52f3d9a4c0af54a34f9effe3d3051705ec4d96eaef6c32f03d15101
            cni.projectcalico.org/podIP: ""
            cni.projectcalico.org/podIPs: ""
            pipeline.tekton.dev/release: 9c61cdf
            tekton.dev/ready: READY
          creationTimestamp: "2021-09-20T09:27:54Z"
          labels:
            app.kubernetes.io/managed-by: tekton-pipelines
            tekton.dev/memberOf: tasks
            tekton.dev/pipeline: demo-pipeline
            tekton.dev/pipelineRun: demo-pipeline-run-1
            tekton.dev/pipelineTask: skaffold-unit-tests
            tekton.dev/task: unit-tests
            tekton.dev/taskRun: demo-pipeline-run-1-skaffold-unit-tests-jnk48
          managedFields:
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  .: {}
                  f:pipeline.tekton.dev/release: {}
                  f:tekton.dev/ready: {}
                f:labels:
                  .: {}
                  f:app.kubernetes.io/managed-by: {}
                  f:tekton.dev/memberOf: {}
                  f:tekton.dev/pipeline: {}
                  f:tekton.dev/pipelineRun: {}
                  f:tekton.dev/pipelineTask: {}
                  f:tekton.dev/task: {}
                  f:tekton.dev/taskRun: {}
                f:ownerReferences:
                  .: {}
                  k:{"uid":"5a3c4b07-f245-492c-bcc7-3cf4ba6de431"}:
                    .: {}
                    f:apiVersion: {}
                    f:blockOwnerDeletion: {}
                    f:controller: {}
                    f:kind: {}
                    f:name: {}
                    f:uid: {}
              f:spec:
                f:activeDeadlineSeconds: {}
                f:containers:
                  k:{"name":"step-git-source-workspace-gfbdz"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:env:
                      .: {}
                      k:{"name":"HOME"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                      k:{"name":"TEKTON_RESOURCE_NAME"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/downward"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                  k:{"name":"step-run-tests"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:env:
                      .: {}
                      k:{"name":"GOPATH"}:
                        .: {}
                        f:name: {}
                        f:value: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources:
                      .: {}
                      f:requests:
                        .: {}
                        f:cpu: {}
                        f:ephemeral-storage: {}
                        f:memory: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/creds"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                f:dnsPolicy: {}
                f:enableServiceLinks: {}
                f:initContainers:
                  .: {}
                  k:{"name":"place-tools"}:
                    .: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/tools"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                  k:{"name":"working-dir-initializer"}:
                    .: {}
                    f:args: {}
                    f:command: {}
                    f:image: {}
                    f:imagePullPolicy: {}
                    f:name: {}
                    f:resources: {}
                    f:terminationMessagePath: {}
                    f:terminationMessagePolicy: {}
                    f:volumeMounts:
                      .: {}
                      k:{"mountPath":"/tekton/home"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/results"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/tekton/steps"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                      k:{"mountPath":"/workspace"}:
                        .: {}
                        f:mountPath: {}
                        f:name: {}
                    f:workingDir: {}
                f:restartPolicy: {}
                f:schedulerName: {}
                f:securityContext: {}
                f:serviceAccount: {}
                f:serviceAccountName: {}
                f:terminationGracePeriodSeconds: {}
                f:volumes:
                  .: {}
                  k:{"name":"tekton-creds-init-home-0"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-creds-init-home-1"}:
                    .: {}
                    f:emptyDir:
                      .: {}
                      f:medium: {}
                    f:name: {}
                  k:{"name":"tekton-internal-downward"}:
                    .: {}
                    f:downwardAPI:
                      .: {}
                      f:defaultMode: {}
                      f:items: {}
                    f:name: {}
                  k:{"name":"tekton-internal-home"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-results"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-steps"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-tools"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
                  k:{"name":"tekton-internal-workspace"}:
                    .: {}
                    f:emptyDir: {}
                    f:name: {}
            manager: controller
            operation: Update
            time: "2021-09-20T09:28:24Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:status:
                f:conditions:
                  k:{"type":"ContainersReady"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Initialized"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                  k:{"type":"Ready"}:
                    .: {}
                    f:lastProbeTime: {}
                    f:lastTransitionTime: {}
                    f:reason: {}
                    f:status: {}
                    f:type: {}
                f:containerStatuses: {}
                f:hostIP: {}
                f:initContainerStatuses: {}
                f:phase: {}
                f:podIP: {}
                f:podIPs:
                  .: {}
                  k:{"ip":"172.20.64.52"}:
                    .: {}
                    f:ip: {}
                f:startTime: {}
            manager: kubelet
            operation: Update
            time: "2021-09-20T09:28:54Z"
          - apiVersion: v1
            fieldsType: FieldsV1
            fieldsV1:
              f:metadata:
                f:annotations:
                  f:cni.projectcalico.org/containerID: {}
                  f:cni.projectcalico.org/podIP: {}
                  f:cni.projectcalico.org/podIPs: {}
            manager: calico
            operation: Update
            time: "2021-09-20T09:28:55Z"
          name: demo-pipeline-run-1-skaffold-unit-tests-jnk48-pod-kghhc
          namespace: arendelle-ckkbw
          ownerReferences:
          - apiVersion: tekton.dev/v1beta1
            blockOwnerDeletion: true
            controller: true
            kind: TaskRun
            name: demo-pipeline-run-1-skaffold-unit-tests-jnk48
            uid: 5a3c4b07-f245-492c-bcc7-3cf4ba6de431
          resourceVersion: "1731409"
          selfLink: /api/v1/namespaces/arendelle-ckkbw/pods/demo-pipeline-run-1-skaffold-unit-tests-jnk48-pod-kghhc
          uid: d07a3671-48a6-4342-adf4-14696e32b9c5
        spec:
          activeDeadlineSeconds: 5400
          containers:
          - args:
            - -wait_file
            - /tekton/downward/ready
            - -wait_file_content
            - -post_file
            - /tekton/tools/0
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-git-source-workspace-gfbdz
            - -step_metadata_dir_link
            - /tekton/steps/0
            - -entrypoint
            - /ko-app/git-init
            - --
            - -url
            - https://github.com/GoogleContainerTools/skaffold
            - -path
            - /workspace/go/src/github.com/GoogleContainerTools/skaffold
            - -revision
            - v0.32.0
            command:
            - /tekton/tools/entrypoint
            env:
            - name: TEKTON_RESOURCE_NAME
              value: workspace
            - name: HOME
              value: /tekton/home
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            imagePullPolicy: IfNotPresent
            name: step-git-source-workspace-gfbdz
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/downward
              name: tekton-internal-downward
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-0
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
            workingDir: /workspace
          - args:
            - -wait_file
            - /tekton/tools/0
            - -post_file
            - /tekton/tools/1
            - -termination_path
            - /tekton/termination
            - -step_metadata_dir
            - /tekton/steps/step-run-tests
            - -step_metadata_dir_link
            - /tekton/steps/1
            - -entrypoint
            - echo
            - --
            - pass
            command:
            - /tekton/tools/entrypoint
            env:
            - name: GOPATH
              value: /workspace/go
            image: golang
            imagePullPolicy: Always
            name: step-run-tests
            resources:
              requests:
                cpu: "0"
                ephemeral-storage: "0"
                memory: "0"
            terminationMessagePath: /tekton/termination
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /tekton/creds
              name: tekton-creds-init-home-1
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
            workingDir: /workspace/go/src/github.com/GoogleContainerTools/skaffold
          dnsPolicy: ClusterFirst
          enableServiceLinks: true
          initContainers:
          - command:
            - /ko-app/entrypoint
            - cp
            - /ko-app/entrypoint
            - /tekton/tools/entrypoint
            image: ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            imagePullPolicy: IfNotPresent
            name: place-tools
            resources: {}
            terminationMessagePath: /dev/termination-log
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /tekton/tools
              name: tekton-internal-tools
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
            workingDir: /
          - args:
            - -c
            - mkdir -p /workspace/go/src/github.com/GoogleContainerTools/skaffold
            command:
            - sh
            image: gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            imagePullPolicy: IfNotPresent
            name: working-dir-initializer
            resources: {}
            terminationMessagePath: /dev/termination-log
            terminationMessagePolicy: File
            volumeMounts:
            - mountPath: /workspace
              name: tekton-internal-workspace
            - mountPath: /tekton/home
              name: tekton-internal-home
            - mountPath: /tekton/results
              name: tekton-internal-results
            - mountPath: /tekton/steps
              name: tekton-internal-steps
            - mountPath: /var/run/secrets/kubernetes.io/serviceaccount
              name: default-token-wjm8q
              readOnly: true
            workingDir: /workspace
          nodeName: snat-vm1
          preemptionPolicy: PreemptLowerPriority
          priority: 0
          restartPolicy: Never
          schedulerName: default-scheduler
          securityContext: {}
          serviceAccount: default
          serviceAccountName: default
          terminationGracePeriodSeconds: 30
          tolerations:
          - effect: NoExecute
            key: node.kubernetes.io/not-ready
            operator: Exists
            tolerationSeconds: 300
          - effect: NoExecute
            key: node.kubernetes.io/unreachable
            operator: Exists
            tolerationSeconds: 300
          volumes:
          - emptyDir: {}
            name: tekton-internal-workspace
          - emptyDir: {}
            name: tekton-internal-home
          - emptyDir: {}
            name: tekton-internal-results
          - emptyDir: {}
            name: tekton-internal-steps
          - emptyDir: {}
            name: tekton-internal-tools
          - downwardAPI:
              defaultMode: 420
              items:
              - fieldRef:
                  apiVersion: v1
                  fieldPath: metadata.annotations['tekton.dev/ready']
                path: ready
            name: tekton-internal-downward
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-0
          - emptyDir:
              medium: Memory
            name: tekton-creds-init-home-1
          - name: default-token-wjm8q
            secret:
              defaultMode: 420
              secretName: default-token-wjm8q
        status:
          conditions:
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:28:11Z"
            reason: PodCompleted
            status: "True"
            type: Initialized
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:28:54Z"
            reason: PodCompleted
            status: "False"
            type: Ready
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:28:54Z"
            reason: PodCompleted
            status: "False"
            type: ContainersReady
          - lastProbeTime: null
            lastTransitionTime: "2021-09-20T09:27:54Z"
            status: "True"
            type: PodScheduled
          containerStatuses:
          - containerID: docker://723332a10d224b403e1bbb7e714283e65c6f5ee3e35d25091b4d29d54c234afd
            image: sha256:4a0cc10c5831fdd70d05d21ffb7a004be9894a284a91d0c5425981c71ea3f42a
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/git-init-4874978a9786b6625dd8b6ef2a21aa70@sha256:8d9bdfd6b2174709ae14b397531055a69d889dd36d389732ca7cea2c02acdb99
            lastState: {}
            name: step-git-source-workspace-gfbdz
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://723332a10d224b403e1bbb7e714283e65c6f5ee3e35d25091b4d29d54c234afd
                exitCode: 0
                finishedAt: "2021-09-20T09:28:36Z"
                message: '[{"key":"commit","value":"6ed7aad5e8a36052ee5f6079fc91368e362121f7","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"url","value":"https://github.com/GoogleContainerTools/skaffold","resourceName":"workspace","resourceRef":{"name":"workspace"}},{"key":"StartedAt","value":"2021-09-20T09:28:25.241Z","type":"InternalTektonResult"}]'
                reason: Completed
                startedAt: "2021-09-20T09:28:14Z"
          - containerID: docker://df52677a6a69ad45c15ea1517d847b777a2fe332b18e8db2fd3ba8381db53b87
            image: golang:latest
            imageID: docker-pullable://golang@sha256:285cf0cb73ab995caee61b900b2be123cd198f3541ce318c549ea5ff9832bdf0
            lastState: {}
            name: step-run-tests
            ready: false
            restartCount: 0
            started: false
            state:
              terminated:
                containerID: docker://df52677a6a69ad45c15ea1517d847b777a2fe332b18e8db2fd3ba8381db53b87
                exitCode: 0
                finishedAt: "2021-09-20T09:28:36Z"
                message: '[{"key":"StartedAt","value":"2021-09-20T09:28:35.726Z","type":"InternalTektonResult"}]'
                reason: Completed
                startedAt: "2021-09-20T09:28:23Z"
          hostIP: 192.168.100.196
          initContainerStatuses:
          - containerID: docker://20913144f7c5467932cebfef9b78c97d5503af0d423958bcbbf4cbb66967ac58
            image: sha256:d070f203876e5761802c781f19abcca89e4f28a13752a22284260530834012be
            imageID: docker-pullable://ppc64le-cluster.bastion-p.svc.cluster.local:443/entrypoint-bff0a22da108bc2f16c818c97641a296@sha256:b989e958db46a747670f3fba11b4b8ae580077b72bc4d2ec0f6f1e69b1eafd56
            lastState: {}
            name: place-tools
            ready: true
            restartCount: 0
            state:
              terminated:
                containerID: docker://20913144f7c5467932cebfef9b78c97d5503af0d423958bcbbf4cbb66967ac58
                exitCode: 0
                finishedAt: "2021-09-20T09:28:04Z"
                reason: Completed
                startedAt: "2021-09-20T09:28:04Z"
          - containerID: docker://54afc5e5afff7b220969bbf2c52de5aa756ba839afc83e59d00bfdad42e63de3
            image: sha256:2b725792e3b49e8cfdc1214f355219693d58ac02ef3751cfaa451da71a46f29d
            imageID: docker-pullable://gcr.io/distroless/base@sha256:aa4fd987555ea10e1a4ec8765da8158b5ffdfef1e72da512c7ede509bc9966c4
            lastState: {}
            name: working-dir-initializer
            ready: true
            restartCount: 0
            state:
              terminated:
                containerID: docker://54afc5e5afff7b220969bbf2c52de5aa756ba839afc83e59d00bfdad42e63de3
                exitCode: 0
                finishedAt: "2021-09-20T09:28:08Z"
                reason: Completed
                startedAt: "2021-09-20T09:28:08Z"
          phase: Succeeded
          podIP: 172.20.64.52
          podIPs:
          - ip: 172.20.64.52
          qosClass: BestEffort
          startTime: "2021-09-20T09:27:55Z"
        
    panic.go:636: #####################################################
    panic.go:636: ### Dumping logs from Pods in the arendelle-ckkbw ###
    panic.go:636: #####################################################
    build_logs.go:37: build logs 
        >>> Container step-create-dir-builtimage-vkb2g:
        
        >>> Container step-git-source-workspace-2ptjp:
        {"level":"info","ts":1632130200.9013462,"caller":"git/git.go:169","msg":"Successfully cloned https://github.com/GoogleContainerTools/skaffold @ 6ed7aad5e8a36052ee5f6079fc91368e362121f7 (grafted, HEAD) in path /workspace/workspace"}
        {"level":"info","ts":1632130201.1751554,"caller":"git/git.go:207","msg":"Successfully initialized and updated submodules in path /workspace/workspace"}
        
        >>> Container step-build-and-push:
        [36mINFO[0m[0000] Resolved base name golang:1.12.5-alpine3.9 to golang:1.12.5-alpine3.9 
        [36mINFO[0m[0000] Resolved base name alpine:3.9 to alpine:3.9  
        [36mINFO[0m[0000] Resolved base name golang:1.12.5-alpine3.9 to golang:1.12.5-alpine3.9 
        [36mINFO[0m[0000] Resolved base name alpine:3.9 to alpine:3.9  
        [36mINFO[0m[0000] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0001] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0001] Retrieving image manifest alpine:3.9         
        [36mINFO[0m[0001] Retrieving image manifest alpine:3.9         
        [36mINFO[0m[0002] Built cross stage deps: map[0:[/app]]        
        [36mINFO[0m[0002] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0002] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0002] Unpacking rootfs as cmd COPY app.go . requires it. 
        [36mINFO[0m[0015] Taking snapshot of full filesystem...        
        [36mINFO[0m[0063] COPY app.go .                                
        [36mINFO[0m[0063] Taking snapshot of files...                  
        [36mINFO[0m[0063] RUN go build -o /app .                       
        [36mINFO[0m[0063] cmd: /bin/sh                                 
        [36mINFO[0m[0063] args: [-c go build -o /app .]                
        # _/go
        /usr/local/go/pkg/tool/linux_ppc64le/link: running gcc failed: exec: "gcc": executable file not found in $PATH
        
        error building image: error building stage: failed to execute command: waiting for process to exit: exit status 2
        
        >>> Container step-image-digest-exporter-xwd74:
        2021/09/20 09:31:08 Skipping step because a previous step failed
    build_logs.go:37: build logs 
        >>> Container step-create-dir-builtimage-846f9:
        
        >>> Container step-git-source-workspace-2nlh7:
        {"level":"info","ts":1632130193.9670036,"caller":"git/git.go:169","msg":"Successfully cloned https://github.com/GoogleContainerTools/skaffold @ 6ed7aad5e8a36052ee5f6079fc91368e362121f7 (grafted, HEAD) in path /workspace/workspace"}
        {"level":"info","ts":1632130194.0383098,"caller":"git/git.go:207","msg":"Successfully initialized and updated submodules in path /workspace/workspace"}
        
        >>> Container step-build-and-push:
        [36mINFO[0m[0002] Resolved base name golang:1.12.5-alpine3.9 to golang:1.12.5-alpine3.9 
        [36mINFO[0m[0002] Resolved base name alpine:3.9 to alpine:3.9  
        [36mINFO[0m[0002] Resolved base name golang:1.12.5-alpine3.9 to golang:1.12.5-alpine3.9 
        [36mINFO[0m[0002] Resolved base name alpine:3.9 to alpine:3.9  
        [36mINFO[0m[0002] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0003] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0003] Retrieving image manifest alpine:3.9         
        [36mINFO[0m[0004] Retrieving image manifest alpine:3.9         
        [36mINFO[0m[0004] Built cross stage deps: map[0:[/web]]        
        [36mINFO[0m[0004] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0004] Retrieving image manifest golang:1.12.5-alpine3.9 
        [36mINFO[0m[0005] Unpacking rootfs as cmd COPY web.go . requires it. 
        [36mINFO[0m[0017] Taking snapshot of full filesystem...        
        [36mINFO[0m[0065] COPY web.go .                                
        [36mINFO[0m[0065] Taking snapshot of files...                  
        [36mINFO[0m[0065] RUN go build -o /web .                       
        [36mINFO[0m[0065] cmd: /bin/sh                                 
        [36mINFO[0m[0065] args: [-c go build -o /web .]                
        # _/go
        /usr/local/go/pkg/tool/linux_ppc64le/link: running gcc failed: exec: "gcc": executable file not found in $PATH
        
        error building image: error building stage: failed to execute command: waiting for process to exit: exit status 2
        
        >>> Container step-image-digest-exporter-mr7p2:
        2021/09/20 09:31:07 Skipping step because a previous step failed
    build_logs.go:37: build logs 
        >>> Container step-git-source-workspace-gfbdz:
        {"level":"info","ts":1632130111.7073839,"caller":"git/git.go:169","msg":"Successfully cloned https://github.com/GoogleContainerTools/skaffold @ 6ed7aad5e8a36052ee5f6079fc91368e362121f7 (grafted, HEAD) in path /workspace/go/src/github.com/GoogleContainerTools/skaffold"}
        {"level":"info","ts":1632130111.732457,"caller":"git/git.go:207","msg":"Successfully initialized and updated submodules in path /workspace/go/src/github.com/GoogleContainerTools/skaffold"}
        
        >>> Container step-run-tests:
        pass
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec
    init_test.go:135: Create namespace arendelle-45s65 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-45s65"
=== CONT  TestExamples/v1alpha1/taskruns/sidecar-ready
    examples_test.go:169: Deleting namespace arendelle-s4nrb
=== CONT  TestExamples/v1alpha1/taskruns/secret-volume-params
    init_test.go:135: Create namespace arendelle-zvn57 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-zvn57"
=== CONT  TestExamples/v1alpha1/taskruns/template-volume
    examples_test.go:169: Deleting namespace arendelle-c2x99
=== CONT  TestExamples/v1alpha1/taskruns/secret-env
=== CONT  TestExamples/v1alpha1/taskruns/unnamed-steps
    examples_test.go:169: Deleting namespace arendelle-vwcmg
=== CONT  TestExamples/v1beta1/taskruns/git-ssh-creds
=== CONT  TestExamples/v1alpha1/taskruns/secret-env
    init_test.go:135: Create namespace arendelle-nrtpc to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-nrtpc"
=== CONT  TestExamples/v1beta1/taskruns/git-ssh-creds
    init_test.go:135: Create namespace arendelle-m9hxs to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-m9hxs"
=== CONT  TestExamples/v1alpha1/taskruns/sidecar-ready-script
    examples_test.go:169: Deleting namespace arendelle-pwc6s
=== CONT  TestExamples/v1beta1/taskruns/template-volume
    init_test.go:135: Create namespace arendelle-wlfq4 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-wlfq4"
=== CONT  TestExamples/v1beta1/pipelineruns/output-pipelinerun
    examples_test.go:169: Deleting namespace arendelle-xfwdr
=== CONT  TestExamples/v1beta1/taskruns/custom-env
    init_test.go:135: Create namespace arendelle-jzld2 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-jzld2"
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec
    examples_test.go:169: Deleting namespace arendelle-45s65
=== CONT  TestExamples/v1alpha1/pipelineruns/task_results_example
    init_test.go:135: Create namespace arendelle-pplzh to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-pplzh"
=== CONT  TestExamples/v1alpha1/taskruns/secret-volume-params
    examples_test.go:169: Deleting namespace arendelle-zvn57
=== CONT  TestExamples/v1beta1/taskruns/cloud-event
    init_test.go:135: Create namespace arendelle-fvppv to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-fvppv"
=== CONT  TestExamples/v1alpha1/pipelineruns/task_results_example
    examples_test.go:153: pipelinerun or taskrun not created for ../examples/v1alpha1/pipelineruns/task_results_example.yaml
    panic.go:636: Deleting namespace arendelle-pplzh
=== CONT  TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-same-condition-refer
    init_test.go:135: Create namespace arendelle-7zhch to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-7zhch"
=== CONT  TestExamples/v1beta1/taskruns/custom-env
    examples_test.go:169: Deleting namespace arendelle-jzld2
=== CONT  TestExamples/v1beta1/pipelineruns/workspace-from-volumeclaimtemplate
    init_test.go:135: Create namespace arendelle-zbr6h to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-zbr6h"
=== CONT  TestExamples/v1alpha1/taskruns/secret-env
    examples_test.go:169: Deleting namespace arendelle-nrtpc
=== CONT  TestExamples/v1beta1/taskruns/template-volume
    examples_test.go:169: Deleting namespace arendelle-wlfq4
=== CONT  TestExamples/v1alpha1/pipelineruns/demo-optional-resources
=== CONT  TestExamples/v1beta1/pipelineruns/optional-workspaces
    init_test.go:135: Create namespace arendelle-jd9fb to deploy to
=== CONT  TestExamples/v1alpha1/pipelineruns/demo-optional-resources
    init_test.go:135: Create namespace arendelle-5glkd to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-5glkd"
=== CONT  TestExamples/v1beta1/pipelineruns/optional-workspaces
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-jd9fb"
=== CONT  TestExamples/v1alpha1/taskruns/secret-volume
    examples_test.go:169: Deleting namespace arendelle-kxqz5
=== CONT  TestExamples/v1beta1/taskruns/run-steps-as-non-root
    init_test.go:135: Create namespace arendelle-8lf92 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-8lf92"
=== CONT  TestExamples/v1alpha1/taskruns/sidecar-interp
    examples_test.go:169: Deleting namespace arendelle-fj98c
=== CONT  TestExamples/v1beta1/taskruns/task-output-image
    init_test.go:135: Create namespace arendelle-79mb6 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-79mb6"
=== CONT  TestExamples/v1beta1/taskruns/git-ssh-creds
    examples_test.go:169: Deleting namespace arendelle-m9hxs
=== CONT  TestExamples/v1beta1/taskruns/clustertask
    init_test.go:135: Create namespace arendelle-nwjqc to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-nwjqc"
=== CONT  TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-same-condition-refer
    examples_test.go:169: Deleting namespace arendelle-7zhch
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun
    multiarch_utils.go:164: skip for ppc64le architecture
=== CONT  TestExamples/v1beta1/taskruns/pullrequest_input_copystep_output
    init_test.go:135: Create namespace arendelle-vdxzv to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-vdxzv"
=== CONT  TestExamples/v1alpha1/pipelineruns/demo-optional-resources
    examples_test.go:169: Deleting namespace arendelle-5glkd
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-final-tasks
    init_test.go:135: Create namespace arendelle-gnq9x to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-gnq9x"
=== CONT  TestExamples/v1beta1/taskruns/clustertask
    examples_test.go:109: Deleting clustertask clustertask-v1beta1
=== CONT  TestExamples/v1beta1/taskruns/run-steps-as-non-root
    examples_test.go:169: Deleting namespace arendelle-8lf92
=== CONT  TestExamples/v1beta1/taskruns/clustertask
    examples_test.go:169: Deleting namespace arendelle-nwjqc
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
    init_test.go:135: Create namespace arendelle-hjmff to deploy to
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec
    init_test.go:135: Create namespace arendelle-6prbs to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-6prbs"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-hjmff"
=== CONT  TestExamples/v1beta1/taskruns/cloud-event
    examples_test.go:169: Deleting namespace arendelle-fvppv
=== CONT  TestExamples/v1beta1/taskruns/task-multiple-output-image
    init_test.go:135: Create namespace arendelle-hhtxp to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-hhtxp"
=== CONT  TestExamples/v1beta1/taskruns/task-output-image
    examples_test.go:169: Deleting namespace arendelle-79mb6
=== CONT  TestExamples/v1beta1/pipelineruns/optional-workspaces
    examples_test.go:169: Deleting namespace arendelle-jd9fb
=== CONT  TestExamples/v1beta1/taskruns/steptemplate-env-merge
=== CONT  TestExamples/v1beta1/taskruns/gcs-resource
    multiarch_utils.go:164: skip for ppc64le architecture
=== CONT  TestExamples/v1beta1/taskruns/dind-sidecar
    init_test.go:135: Create namespace arendelle-88twt to deploy to
=== CONT  TestExamples/v1beta1/taskruns/steptemplate-env-merge
    init_test.go:135: Create namespace arendelle-85dlq to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-85dlq"
=== CONT  TestExamples/v1beta1/taskruns/dind-sidecar
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-88twt"
=== CONT  TestExamples/v1beta1/pipelineruns/workspace-from-volumeclaimtemplate
    examples_test.go:169: Deleting namespace arendelle-zbr6h
=== CONT  TestExamples/v1beta1/pipelineruns/workspaces
    init_test.go:135: Create namespace arendelle-g5xsk to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-g5xsk"
=== CONT  TestExamples/v1beta1/taskruns/pullrequest_input_copystep_output
    examples_test.go:169: Deleting namespace arendelle-vdxzv
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-extra-params
    init_test.go:135: Create namespace arendelle-zx945 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-zx945"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec
    examples_test.go:169: Deleting namespace arendelle-hjmff
=== CONT  TestExamples/v1beta1/taskruns/step-script
    init_test.go:135: Create namespace arendelle-dt8dr to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-dt8dr"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec
    examples_test.go:169: Deleting namespace arendelle-6prbs
=== CONT  TestExamples/v1beta1/taskruns/pullrequest
    init_test.go:135: Create namespace arendelle-qg7ln to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-qg7ln"
=== CONT  TestExamples/v1beta1/taskruns/steptemplate-env-merge
    examples_test.go:169: Deleting namespace arendelle-85dlq
=== CONT  TestExamples/v1beta1/taskruns/sidecar-ready-script
    init_test.go:135: Create namespace arendelle-7vggd to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-7vggd"
=== CONT  TestExamples/v1beta1/taskruns/task-multiple-output-image
    examples_test.go:169: Deleting namespace arendelle-hhtxp
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-extra-params
    examples_test.go:169: Deleting namespace arendelle-zx945
=== CONT  TestExamples/v1beta1/taskruns/task-result
=== CONT  TestExamples/v1beta1/taskruns/secret-volume
=== CONT  TestExamples/v1beta1/taskruns/task-result
    init_test.go:135: Create namespace arendelle-jdrc2 to deploy to
=== CONT  TestExamples/v1beta1/taskruns/secret-volume
    init_test.go:135: Create namespace arendelle-8ncr6 to deploy to
=== CONT  TestExamples/v1beta1/taskruns/task-result
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-jdrc2"
=== CONT  TestExamples/v1beta1/taskruns/secret-volume
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-8ncr6"
=== CONT  TestExamples/v1beta1/taskruns/pullrequest
    examples_test.go:169: Deleting namespace arendelle-qg7ln
=== CONT  TestExamples/v1beta1/taskruns/optional-resources
    init_test.go:135: Create namespace arendelle-vwkjm to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-vwkjm"
=== CONT  TestExamples/v1beta1/taskruns/dind-sidecar
    examples_test.go:169: Deleting namespace arendelle-88twt
=== CONT  TestExamples/v1beta1/taskruns/secret-volume-params
    init_test.go:135: Create namespace arendelle-8frnd to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-8frnd"
=== CONT  TestExamples/v1beta1/pipelineruns/workspaces
    examples_test.go:169: Deleting namespace arendelle-g5xsk
=== CONT  TestExamples/v1beta1/pipelineruns/task_results_example
    init_test.go:135: Create namespace arendelle-kzhmm to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-kzhmm"
=== CONT  TestExamples/v1beta1/taskruns/secret-volume
    examples_test.go:169: Deleting namespace arendelle-8ncr6
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-using-different-subpaths-of-workspace
    init_test.go:135: Create namespace arendelle-bzsb6 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-bzsb6"
=== CONT  TestExamples/v1beta1/taskruns/sidecar-ready-script
    examples_test.go:169: Deleting namespace arendelle-7vggd
=== CONT  TestExamples/v1beta1/taskruns/image-params
    init_test.go:135: Create namespace arendelle-hbzrg to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-hbzrg"
=== CONT  TestExamples/v1beta1/taskruns/task-result
    examples_test.go:169: Deleting namespace arendelle-jdrc2
=== CONT  TestExamples/v1beta1/taskruns/step-by-digest
    init_test.go:135: Create namespace arendelle-8rb7m to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-8rb7m"
=== CONT  TestExamples/v1beta1/taskruns/secret-volume-params
    examples_test.go:169: Deleting namespace arendelle-8frnd
=== CONT  TestExamples/v1alpha1/taskruns/configmap
    init_test.go:135: Create namespace arendelle-7ncvp to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-7ncvp"
=== CONT  TestExamples/v1beta1/taskruns/optional-resources
    examples_test.go:169: Deleting namespace arendelle-vwkjm
=== CONT  TestExamples/v1alpha1/taskruns/custom-volume
    init_test.go:135: Create namespace arendelle-2nxgl to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-2nxgl"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-final-tasks
    examples_test.go:169: Deleting namespace arendelle-gnq9x
=== CONT  TestExamples/v1beta1/taskruns/home-volume
    init_test.go:135: Create namespace arendelle-9v949 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-9v949"
=== CONT  TestExamples/v1beta1/taskruns/step-by-digest
    examples_test.go:169: Deleting namespace arendelle-8rb7m
=== CONT  TestExamples/v1beta1/taskruns/home-is-set
    init_test.go:135: Create namespace arendelle-9h7pp to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-9h7pp"
=== CONT  TestExamples/v1beta1/taskruns/image-params
    examples_test.go:109: Deleting clustertask image-params
    examples_test.go:169: Deleting namespace arendelle-hbzrg
=== CONT  TestExamples/v1alpha1/taskruns/git-resource
    init_test.go:135: Create namespace arendelle-kgszd to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-kgszd"
=== CONT  TestExamples/v1beta1/taskruns/step-script
    examples_test.go:169: Deleting namespace arendelle-dt8dr
=== CONT  TestExamples/v1alpha1/taskruns/dind-sidecar
    init_test.go:135: Create namespace arendelle-8c9jv to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-8c9jv"
=== CONT  TestExamples/v1alpha1/taskruns/configmap
    examples_test.go:169: Deleting namespace arendelle-7ncvp
=== CONT  TestExamples/v1alpha1/taskruns/git-volume
    init_test.go:135: Create namespace arendelle-nn5mk to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-nn5mk"
=== CONT  TestExamples/v1beta1/pipelineruns/task_results_example
    examples_test.go:169: Deleting namespace arendelle-kzhmm
=== CONT  TestExamples/v1alpha1/taskruns/clustertask
    init_test.go:135: Create namespace arendelle-w6l6n to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-w6l6n"
=== CONT  TestExamples/v1beta1/taskruns/home-is-set
    examples_test.go:169: Deleting namespace arendelle-9h7pp
=== CONT  TestExamples/v1alpha1/taskruns/home-volume
    init_test.go:135: Create namespace arendelle-hqxfh to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-hqxfh"
=== CONT  TestExamples/v1alpha1/taskruns/git-volume
    examples_test.go:169: Deleting namespace arendelle-nn5mk
=== CONT  TestExamples/v1alpha1/taskruns/optional-resources-with-clustertask
    init_test.go:135: Create namespace arendelle-tvxzf to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-tvxzf"
=== CONT  TestExamples/v1alpha1/taskruns/git-resource
    examples_test.go:169: Deleting namespace arendelle-kgszd
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-when-expressions
    init_test.go:135: Create namespace arendelle-98rvp to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-98rvp"
=== CONT  TestExamples/v1beta1/taskruns/home-volume
    examples_test.go:169: Deleting namespace arendelle-9v949
=== CONT  TestExamples/v1alpha1/taskruns/cloud-event
    init_test.go:135: Create namespace arendelle-kcspr to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-kcspr"
=== CONT  TestExamples/v1alpha1/taskruns/custom-volume
    examples_test.go:169: Deleting namespace arendelle-2nxgl
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-resourcespec
    init_test.go:135: Create namespace arendelle-5xhh4 to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-5xhh4"
=== CONT  TestExamples/v1alpha1/taskruns/dind-sidecar
    examples_test.go:169: Deleting namespace arendelle-8c9jv
=== CONT  TestExamples/v1alpha1/taskruns/home-is-set
    init_test.go:135: Create namespace arendelle-xpckl to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-xpckl"
=== CONT  TestExamples/v1alpha1/taskruns/clustertask
    examples_test.go:109: Deleting clustertask clustertask-v1alpha1
    examples_test.go:169: Deleting namespace arendelle-w6l6n
=== CONT  TestExamples/v1alpha1/taskruns/git-ssh-creds
    init_test.go:135: Create namespace arendelle-lrcmg to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-lrcmg"
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-using-different-subpaths-of-workspace
    examples_test.go:169: Deleting namespace arendelle-bzsb6
=== CONT  TestExamples/v1beta1/pipelineruns/using-retries-and-retry-count-variables
    init_test.go:135: Create namespace arendelle-76jgv to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-76jgv"
=== CONT  TestExamples/v1alpha1/taskruns/optional-resources-with-clustertask
    examples_test.go:109: Deleting clustertask clustertask-with-optional-resources-v1alpha1
    examples_test.go:169: Deleting namespace arendelle-tvxzf
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-resourcespec
    init_test.go:135: Create namespace arendelle-mkfdb to deploy to
    init_test.go:163: Verify SA "default" is created in namespace "arendelle-mkfdb"
=== CONT  TestExamples/v1alpha1/taskruns/home-volume
    examples_test.go:169: Deleting namespace arendelle-hqxfh
=== CONT  TestExamples/v1alpha1/taskruns/cloud-event
    examples_test.go:169: Deleting namespace arendelle-kcspr
=== CONT  TestExamples/v1alpha1/taskruns/home-is-set
    examples_test.go:169: Deleting namespace arendelle-xpckl
=== CONT  TestExamples/v1alpha1/taskruns/git-ssh-creds
    examples_test.go:169: Deleting namespace arendelle-lrcmg
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-when-expressions
    examples_test.go:169: Deleting namespace arendelle-98rvp
=== CONT  TestExamples/v1beta1/pipelineruns/pipelinerun-with-resourcespec
    examples_test.go:169: Deleting namespace arendelle-5xhh4
=== CONT  TestExamples/v1alpha1/pipelineruns/pipelinerun-with-resourcespec
    examples_test.go:169: Deleting namespace arendelle-mkfdb
=== CONT  TestExamples/v1beta1/pipelineruns/using-retries-and-retry-count-variables
    examples_test.go:169: Deleting namespace arendelle-76jgv
--- FAIL: TestExamples (0.16s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/clustertask-pipelinerun (35.68s)
    --- PASS: TestExamples/v1beta1/taskruns/workspace-volume (97.02s)
    --- PASS: TestExamples/v1alpha1/taskruns/optional-resources (101.67s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-results (120.08s)
    --- PASS: TestExamples/v1alpha1/taskruns/pullrequest (95.58s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-task-execution-status (131.32s)
    --- PASS: TestExamples/v1beta1/taskruns/workspace (137.83s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipeline-result-conditions (138.07s)
    --- PASS: TestExamples/v1beta1/pipelineruns/demo-optional-resources (45.24s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec (52.75s)
    --- PASS: TestExamples/v1beta1/taskruns/workingdir (79.62s)
    --- FAIL: TestExamples/v1alpha1/taskruns/build-push-kaniko (115.67s)
    --- PASS: TestExamples/v1alpha1/taskruns/workspace-readonly (98.68s)
    --- PASS: TestExamples/v1alpha1/taskruns/workspace (127.71s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/workspaces (121.46s)
    --- PASS: TestExamples/v1alpha1/taskruns/task-volume-args (38.37s)
    --- PASS: TestExamples/v1beta1/taskruns/using_context_variables (58.57s)
    --- PASS: TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-optional-resources (152.25s)
    --- PASS: TestExamples/v1beta1/pipelineruns/using_context_variables (63.39s)
    --- PASS: TestExamples/v1beta1/taskruns/git-volume (46.17s)
    --- PASS: TestExamples/v1beta1/taskruns/creds-init-only-mounts-provided-credentials (60.62s)
    --- PASS: TestExamples/v1beta1/pipelineruns/conditional-pipelinerun (196.30s)
    --- PASS: TestExamples/v1beta1/taskruns/unnamed-steps (73.83s)
    --- PASS: TestExamples/v1beta1/taskruns/task-volume-args (52.91s)
    --- PASS: TestExamples/v1beta1/taskruns/configmap (58.48s)
    --- PASS: TestExamples/v1beta1/taskruns/git-resource (62.37s)
    --- PASS: TestExamples/v1beta1/taskruns/secret-env (48.64s)
    --- PASS: TestExamples/v1beta1/taskruns/workspace-readonly (69.26s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-with-params (66.53s)
    --- PASS: TestExamples/v1beta1/taskruns/steps-run-in-order (53.18s)
    --- SKIP: TestExamples/v1alpha1/taskruns/gcs-resource (0.00s)
    --- PASS: TestExamples/v1beta1/taskruns/git-ssh-creds-without-known_hosts (73.11s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/output-pipelinerun (149.57s)
    --- PASS: TestExamples/v1beta1/taskruns/custom-volume (52.93s)
    --- PASS: TestExamples/v1beta1/taskruns/sidecar-interp (49.20s)
    --- PASS: TestExamples/v1beta1/taskruns/optional-workspaces (38.00s)
    --- PASS: TestExamples/v1beta1/pipelineruns/using-optional-workspaces-in-when-expressions (38.31s)
    --- PASS: TestExamples/v1alpha1/taskruns/custom-env (33.39s)
    --- PASS: TestExamples/v1beta1/taskruns/authenticating-git-commands (45.14s)
    --- PASS: TestExamples/v1alpha1/taskruns/steps-run-in-order (36.46s)
    --- PASS: TestExamples/v1beta1/taskruns/sidecar-ready (49.02s)
    --- PASS: TestExamples/v1beta1/pipelineruns/conditional-pipelinerun-with-same-condition-refer (36.47s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/pipelinerun-with-params (51.75s)
    --- SKIP: TestExamples/v1alpha1/taskruns/task-result (1.24s)
    --- PASS: TestExamples/v1alpha1/taskruns/workingdir (45.01s)
    --- PASS: TestExamples/v1alpha1/taskruns/workspace-volume (62.87s)
    --- PASS: TestExamples/v1alpha1/taskruns/step-script (104.66s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-with-parallel-tasks-using-pvc (168.57s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-results-with-params (61.10s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-optional-resources (96.26s)
    --- PASS: TestExamples/v1alpha1/taskruns/steptemplate-env-merge (68.92s)
    --- PASS: TestExamples/v1alpha1/taskruns/task-output-image (64.70s)
    --- PASS: TestExamples/v1alpha1/taskruns/task-multiple-output-image (82.77s)
    --- PASS: TestExamples/v1beta1/taskruns/optional-resources-with-clustertask (62.56s)
    --- FAIL: TestExamples/v1beta1/pipelineruns/clustertask-pipelinerun (47.31s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun (180.73s)
    --- FAIL: TestExamples/v1beta1/taskruns/workspace-in-sidecar (75.12s)
    --- PASS: TestExamples/v1alpha1/taskruns/step-by-digest (107.85s)
    --- FAIL: TestExamples/v1alpha1/pipelineruns/pipelinerun (206.23s)
    --- PASS: TestExamples/v1alpha1/taskruns/sidecar-ready (109.94s)
    --- PASS: TestExamples/v1alpha1/taskruns/template-volume (101.38s)
    --- PASS: TestExamples/v1alpha1/taskruns/unnamed-steps (112.90s)
    --- PASS: TestExamples/v1alpha1/taskruns/sidecar-ready-script (86.60s)
    --- PASS: TestExamples/v1beta1/pipelineruns/output-pipelinerun (182.89s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/pipelinerun-with-pipelinespec (46.73s)
    --- PASS: TestExamples/v1alpha1/taskruns/secret-volume-params (44.85s)
    --- SKIP: TestExamples/v1alpha1/pipelineruns/task_results_example (0.67s)
    --- PASS: TestExamples/v1beta1/taskruns/custom-env (40.14s)
    --- PASS: TestExamples/v1alpha1/taskruns/secret-env (46.47s)
    --- PASS: TestExamples/v1beta1/taskruns/template-volume (43.86s)
    --- PASS: TestExamples/v1alpha1/taskruns/secret-volume (62.10s)
    --- PASS: TestExamples/v1alpha1/taskruns/sidecar-interp (103.07s)
    --- PASS: TestExamples/v1beta1/taskruns/git-ssh-creds (69.40s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/conditional-pipelinerun-with-same-condition-refer (66.86s)
    --- SKIP: TestExamples/v1beta1/pipelineruns/pipelinerun (0.00s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/demo-optional-resources (66.12s)
    --- PASS: TestExamples/v1beta1/taskruns/run-steps-as-non-root (73.03s)
    --- PASS: TestExamples/v1beta1/taskruns/clustertask (52.08s)
    --- PASS: TestExamples/v1beta1/taskruns/cloud-event (80.47s)
    --- PASS: TestExamples/v1beta1/taskruns/task-output-image (88.71s)
    --- PASS: TestExamples/v1beta1/pipelineruns/optional-workspaces (106.36s)
    --- SKIP: TestExamples/v1beta1/taskruns/gcs-resource (0.00s)
    --- PASS: TestExamples/v1beta1/pipelineruns/workspace-from-volumeclaimtemplate (108.12s)
    --- PASS: TestExamples/v1beta1/taskruns/pullrequest_input_copystep_output (72.78s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec-and-taskspec (69.11s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-with-pipelinespec (70.52s)
    --- PASS: TestExamples/v1beta1/taskruns/steptemplate-env-merge (73.03s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-with-extra-params (50.28s)
    --- PASS: TestExamples/v1beta1/taskruns/task-multiple-output-image (109.74s)
    --- PASS: TestExamples/v1beta1/taskruns/pullrequest (71.47s)
    --- PASS: TestExamples/v1beta1/taskruns/dind-sidecar (112.90s)
    --- PASS: TestExamples/v1beta1/pipelineruns/workspaces (123.75s)
    --- PASS: TestExamples/v1beta1/taskruns/secret-volume (74.47s)
    --- PASS: TestExamples/v1beta1/taskruns/sidecar-ready-script (84.85s)
    --- PASS: TestExamples/v1beta1/taskruns/task-result (79.14s)
    --- PASS: TestExamples/v1beta1/taskruns/secret-volume-params (56.60s)
    --- PASS: TestExamples/v1beta1/taskruns/optional-resources (102.84s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-with-final-tasks (258.18s)
    --- PASS: TestExamples/v1beta1/taskruns/step-by-digest (66.96s)
    --- PASS: TestExamples/v1beta1/taskruns/image-params (68.18s)
    --- PASS: TestExamples/v1beta1/taskruns/step-script (194.46s)
    --- PASS: TestExamples/v1alpha1/taskruns/configmap (79.01s)
    --- PASS: TestExamples/v1beta1/pipelineruns/task_results_example (138.43s)
    --- PASS: TestExamples/v1beta1/taskruns/home-is-set (40.48s)
    --- PASS: TestExamples/v1alpha1/taskruns/git-volume (40.55s)
    --- PASS: TestExamples/v1alpha1/taskruns/git-resource (71.36s)
    --- PASS: TestExamples/v1beta1/taskruns/home-volume (92.04s)
    --- PASS: TestExamples/v1alpha1/taskruns/custom-volume (101.15s)
    --- PASS: TestExamples/v1alpha1/taskruns/dind-sidecar (105.07s)
    --- PASS: TestExamples/v1alpha1/taskruns/clustertask (90.46s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-using-different-subpaths-of-workspace (212.13s)
    --- PASS: TestExamples/v1alpha1/taskruns/optional-resources-with-clustertask (81.82s)
    --- PASS: TestExamples/v1alpha1/taskruns/home-volume (105.59s)
    --- PASS: TestExamples/v1alpha1/taskruns/cloud-event (64.56s)
    --- PASS: TestExamples/v1alpha1/taskruns/home-is-set (47.10s)
    --- PASS: TestExamples/v1alpha1/taskruns/git-ssh-creds (67.88s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-with-when-expressions (177.24s)
    --- PASS: TestExamples/v1beta1/pipelineruns/pipelinerun-with-resourcespec (166.72s)
    --- PASS: TestExamples/v1alpha1/pipelineruns/pipelinerun-with-resourcespec (138.70s)
    --- PASS: TestExamples/v1beta1/pipelineruns/using-retries-and-retry-count-variables (168.02s)
FAIL
Using kubeconfig at `` with cluster ``
FAIL	github.com/tektoncd/pipeline/test	1385.645s
FAIL
