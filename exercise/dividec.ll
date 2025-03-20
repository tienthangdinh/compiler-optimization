; ModuleID = 'divide.c'
source_filename = "divide.c"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

; Function Attrs: noinline nounwind optnone uwtable
define dso_local double @divide(double %0, double %1) #0 {
  %3 = alloca double, align 8
  %4 = alloca double, align 8
  %5 = alloca double, align 8
  store double %0, double* %4, align 8
  store double %1, double* %5, align 8
  %6 = load double, double* %5, align 8
  %7 = fcmp une double %6, 0.000000e+00
  br i1 %7, label %8, label %12

8:                                                ; preds = %2
  %9 = load double, double* %4, align 8
  %10 = load double, double* %5, align 8
  %11 = fdiv double %9, %10
  store double %11, double* %3, align 8
  br label %13

12:                                               ; preds = %2
  store double 0.000000e+00, double* %3, align 8
  br label %13

13:                                               ; preds = %12, %8
  %14 = load double, double* %3, align 8
  ret double %14
}

attributes #0 = { noinline nounwind optnone uwtable "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="all" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "unsafe-fp-math"="false" "use-soft-float"="false" }

!llvm.module.flags = !{!0}
!llvm.ident = !{!1}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{!"clang version 10.0.0-4ubuntu1 "}
