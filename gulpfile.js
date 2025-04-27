var exec = require('child_process').exec;
var gulp = require('gulp');

// gulp.task('tree-sitter-generate', function(cb) {
//   exec("tree-sitter generate", function (err, stdout, stderr) {
//     console.log(stdout);
//     console.log(stderr);
//     cb(err);
//   });
// });

// gulp.task(
//   'default',
//   gulp.series('tree-sitter-generate', function(cb) {
//     gulp.watch('grammar.js', gulp.series('tree-sitter-generate'));
//     cb();
//   })
// );

gulp.task('tree-sitter-generate', function(cb) {
  exec("tree-sitter test -u", function (err, stdout, stderr) {
    console.log(stdout);
    console.log(stderr);
    cb(err);
  });
});

gulp.task(
  'default',
  gulp.series('tree-sitter-generate', function(cb) {
    gulp.watch('test/corpus/*', gulp.series('tree-sitter-generate'));
    cb();
  })
);