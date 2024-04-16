#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001B TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000023 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000024 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000026 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000027 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000028 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD (void);
// 0x00000029 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x0000002A System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Max_mDCF86A7A86D2A183D045F007906336B3D989B46C (void);
// 0x0000002B System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000030 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000031 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000035 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000036 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000053 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000054 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000056 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000058 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000060 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000069 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000070 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000072 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000074 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000075 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000076 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000077 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x00000078 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x00000079 System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x0000007A System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x0000007B TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007C System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x0000007D System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x0000007E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007F System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000080 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x00000081 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x00000082 System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000083 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000084 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x00000085 System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x00000086 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000087 System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000088 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000089 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000008A System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000008B System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000008C TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008D System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000008E System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000008F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000090 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000091 System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x00000092 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000093 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000094 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000095 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000096 System.Void System.Linq.Set`1::Resize()
// 0x00000097 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000098 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000099 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000009A System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009C System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009D System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009E System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000009F System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000A0 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000A1 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A2 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A3 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A4 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A5 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A6 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A7 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A8 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000A9 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000AA System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000AB System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AC System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AD System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AE TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000AF System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x000000B0 System.Type System.Linq.Expressions.Expression::get_Type()
extern void Expression_get_Type_m30E49D13EB342DDADA0D5A54979A5EF120E625E6 (void);
// 0x000000B1 System.Boolean System.Linq.Expressions.Expression::get_CanReduce()
extern void Expression_get_CanReduce_mEC1AEC0F8DB412619F80B3B5078F904EFFB1D7F9 (void);
// 0x000000B2 System.Linq.Expressions.Expression System.Linq.Expressions.Expression::Reduce()
extern void Expression_Reduce_mA884731A64882F6E9267B56B989756B64D77168E (void);
// 0x000000B3 System.Linq.Expressions.Expression System.Linq.Expressions.Expression::VisitChildren(System.Linq.Expressions.ExpressionVisitor)
extern void Expression_VisitChildren_m5E48C3529D41B6386FFC3741E3D510BA929347B0 (void);
// 0x000000B4 System.Linq.Expressions.Expression System.Linq.Expressions.Expression::Accept(System.Linq.Expressions.ExpressionVisitor)
extern void Expression_Accept_m006B7D9BA94F93215542BC12250126255643CA60 (void);
// 0x000000B5 System.Linq.Expressions.Expression System.Linq.Expressions.Expression::ReduceAndCheck()
extern void Expression_ReduceAndCheck_mA1B79AA88821432A02C6FF36516E211F5D30844D (void);
// 0x000000B6 System.String System.Linq.Expressions.Expression::get_DebugView()
extern void Expression_get_DebugView_m1776A0E2AFD08E2D63118973941FE45E891DFC95 (void);
// 0x000000B7 System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC (void);
// 0x000000B8 System.Void System.Linq.Expressions.Expression/LambdaExpressionProxy::.ctor(System.Linq.Expressions.LambdaExpression)
extern void LambdaExpressionProxy__ctor_mE67B77D8C8EE9234AA895F8BCBC962A97FEE182D (void);
// 0x000000B9 System.Linq.Expressions.Expression System.Linq.Expressions.Expression/LambdaExpressionProxy::get_Body()
extern void LambdaExpressionProxy_get_Body_m336855259878E44F7FC0636D8A6D1B1E102C3D1B (void);
// 0x000000BA System.Boolean System.Linq.Expressions.Expression/LambdaExpressionProxy::get_CanReduce()
extern void LambdaExpressionProxy_get_CanReduce_mD164307D2AE3DC9346570AC3571E8B374A307C2D (void);
// 0x000000BB System.String System.Linq.Expressions.Expression/LambdaExpressionProxy::get_DebugView()
extern void LambdaExpressionProxy_get_DebugView_m715D27928C3423E2E766CC7AB19EB468AC5BD226 (void);
// 0x000000BC System.String System.Linq.Expressions.Expression/LambdaExpressionProxy::get_Name()
extern void LambdaExpressionProxy_get_Name_m17772DCD291ECC9B5D93C74B10ED01B156C22D00 (void);
// 0x000000BD System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/LambdaExpressionProxy::get_NodeType()
extern void LambdaExpressionProxy_get_NodeType_mE6C18979DD227A112C6B764B73B746F903355476 (void);
// 0x000000BE System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Expression/LambdaExpressionProxy::get_Parameters()
extern void LambdaExpressionProxy_get_Parameters_mCF32AAD0EB16D9BCFFED24CFDE14455E77F4A55E (void);
// 0x000000BF System.Type System.Linq.Expressions.Expression/LambdaExpressionProxy::get_ReturnType()
extern void LambdaExpressionProxy_get_ReturnType_m07DFE63EDDFFFFF5ED81902726B987DD3D1D59DB (void);
// 0x000000C0 System.Boolean System.Linq.Expressions.Expression/LambdaExpressionProxy::get_TailCall()
extern void LambdaExpressionProxy_get_TailCall_m7A7DEF8F33CEEEEC3BA8C841F395B7C53EFABD1A (void);
// 0x000000C1 System.Type System.Linq.Expressions.Expression/LambdaExpressionProxy::get_Type()
extern void LambdaExpressionProxy_get_Type_m002CE181B0B4CF207263AA074A6BBF4551A36D24 (void);
// 0x000000C2 System.Void System.Linq.Expressions.Expression/MemberExpressionProxy::.ctor(System.Linq.Expressions.MemberExpression)
extern void MemberExpressionProxy__ctor_m1BA55D909CDB2196227C0B78A77A3D33F2B94B6B (void);
// 0x000000C3 System.Boolean System.Linq.Expressions.Expression/MemberExpressionProxy::get_CanReduce()
extern void MemberExpressionProxy_get_CanReduce_mA11693CD644E9F048CEB4BAEB17C6118B95CED82 (void);
// 0x000000C4 System.String System.Linq.Expressions.Expression/MemberExpressionProxy::get_DebugView()
extern void MemberExpressionProxy_get_DebugView_mDB528F31B43CE5E0C3D9EF6D784E01CBBD7A20FF (void);
// 0x000000C5 System.Linq.Expressions.Expression System.Linq.Expressions.Expression/MemberExpressionProxy::get_Expression()
extern void MemberExpressionProxy_get_Expression_m3019C7DE7AA56A596E89CF10B6BA3B86191F7CED (void);
// 0x000000C6 System.Reflection.MemberInfo System.Linq.Expressions.Expression/MemberExpressionProxy::get_Member()
extern void MemberExpressionProxy_get_Member_m09E5609580E0D3232E45EE596D4ADD71BFFCAAAF (void);
// 0x000000C7 System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/MemberExpressionProxy::get_NodeType()
extern void MemberExpressionProxy_get_NodeType_m41071E79C9611D635E37C7DB00911B98CFB199B2 (void);
// 0x000000C8 System.Type System.Linq.Expressions.Expression/MemberExpressionProxy::get_Type()
extern void MemberExpressionProxy_get_Type_m1D907F160E8DEE7B2FC1FF0FC4D8235F966729C5 (void);
// 0x000000C9 System.Void System.Linq.Expressions.Expression/ParameterExpressionProxy::.ctor(System.Linq.Expressions.ParameterExpression)
extern void ParameterExpressionProxy__ctor_m512E4E9BFA75311C21A8DE48C988949578EE5A6E (void);
// 0x000000CA System.Boolean System.Linq.Expressions.Expression/ParameterExpressionProxy::get_CanReduce()
extern void ParameterExpressionProxy_get_CanReduce_mEE6C42D23E3468B67D99310AC81996459842E76B (void);
// 0x000000CB System.String System.Linq.Expressions.Expression/ParameterExpressionProxy::get_DebugView()
extern void ParameterExpressionProxy_get_DebugView_m5582B159BDF7073480EC3CAB0930F507E8446700 (void);
// 0x000000CC System.Boolean System.Linq.Expressions.Expression/ParameterExpressionProxy::get_IsByRef()
extern void ParameterExpressionProxy_get_IsByRef_mB46CABBB0577E16137A8C069E84E33CE156CB8B9 (void);
// 0x000000CD System.String System.Linq.Expressions.Expression/ParameterExpressionProxy::get_Name()
extern void ParameterExpressionProxy_get_Name_m598641A441D49736360F23DB78F2DC9C7369729D (void);
// 0x000000CE System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/ParameterExpressionProxy::get_NodeType()
extern void ParameterExpressionProxy_get_NodeType_m2F66DDBBF9FD7C0C5D8D773D2C0874E18D3597FD (void);
// 0x000000CF System.Type System.Linq.Expressions.Expression/ParameterExpressionProxy::get_Type()
extern void ParameterExpressionProxy_get_Type_mECC882B066D090647DC031A8528B7D9A4DD19EAE (void);
// 0x000000D0 System.Void System.Linq.Expressions.Expression/UnaryExpressionProxy::.ctor(System.Linq.Expressions.UnaryExpression)
extern void UnaryExpressionProxy__ctor_mBE2760F1C0B7BC264D24FFAC9A4E7AA2817466AD (void);
// 0x000000D1 System.Boolean System.Linq.Expressions.Expression/UnaryExpressionProxy::get_CanReduce()
extern void UnaryExpressionProxy_get_CanReduce_m141F3E1B25D48EF55994F2A9F002FCE44114F9B5 (void);
// 0x000000D2 System.String System.Linq.Expressions.Expression/UnaryExpressionProxy::get_DebugView()
extern void UnaryExpressionProxy_get_DebugView_mDC12786870436859E28F6EA116D4F65DE4AA317F (void);
// 0x000000D3 System.Boolean System.Linq.Expressions.Expression/UnaryExpressionProxy::get_IsLifted()
extern void UnaryExpressionProxy_get_IsLifted_m02711F19877DD776AAA429B2C6A8F2A782482F4C (void);
// 0x000000D4 System.Boolean System.Linq.Expressions.Expression/UnaryExpressionProxy::get_IsLiftedToNull()
extern void UnaryExpressionProxy_get_IsLiftedToNull_m94A4182EE0D544A769D1071646577765B3E99210 (void);
// 0x000000D5 System.Reflection.MethodInfo System.Linq.Expressions.Expression/UnaryExpressionProxy::get_Method()
extern void UnaryExpressionProxy_get_Method_mD468D07C1706E50B68D758849CAD6CF38BF1F037 (void);
// 0x000000D6 System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression/UnaryExpressionProxy::get_NodeType()
extern void UnaryExpressionProxy_get_NodeType_m69F8674646A055442E4C548956FE60211E2234ED (void);
// 0x000000D7 System.Linq.Expressions.Expression System.Linq.Expressions.Expression/UnaryExpressionProxy::get_Operand()
extern void UnaryExpressionProxy_get_Operand_m470F3412A4760BB05EE699C9F269D26E8273D174 (void);
// 0x000000D8 System.Type System.Linq.Expressions.Expression/UnaryExpressionProxy::get_Type()
extern void UnaryExpressionProxy_get_Type_m01D40A87D5AD89AEA64FD691587AA4F5C95020AD (void);
// 0x000000D9 System.Void System.Linq.Expressions.DebugViewWriter::.ctor(System.IO.TextWriter)
extern void DebugViewWriter__ctor_mE2431D1C20D0785EEF2BD3005EF612D8C15F6CC3 (void);
// 0x000000DA System.Int32 System.Linq.Expressions.DebugViewWriter::get_Base()
extern void DebugViewWriter_get_Base_m9ADE61E5B742C3C4AAC3B596F0DA7CA06682D416 (void);
// 0x000000DB System.Int32 System.Linq.Expressions.DebugViewWriter::get_Delta()
extern void DebugViewWriter_get_Delta_m5A340CD5E59816614646586CFE94B6FA2FED92C7 (void);
// 0x000000DC System.Int32 System.Linq.Expressions.DebugViewWriter::get_Depth()
extern void DebugViewWriter_get_Depth_m6B959DC41B3AF4A6A2C9A9C699F73A910159813D (void);
// 0x000000DD System.Void System.Linq.Expressions.DebugViewWriter::Indent()
extern void DebugViewWriter_Indent_m981634432758477A3D6126AAA3E81B59F8FCB8D7 (void);
// 0x000000DE System.Void System.Linq.Expressions.DebugViewWriter::Dedent()
extern void DebugViewWriter_Dedent_m9BDEB16BB0EAF6F5DB0D91670FDCE68306F27986 (void);
// 0x000000DF System.Void System.Linq.Expressions.DebugViewWriter::NewLine()
extern void DebugViewWriter_NewLine_m0CA66BCE5A3CE16386385B4B2C9CA8C6C53959E0 (void);
// 0x000000E0 System.Int32 System.Linq.Expressions.DebugViewWriter::GetId(T,System.Collections.Generic.Dictionary`2<T,System.Int32>&)
// 0x000000E1 System.Int32 System.Linq.Expressions.DebugViewWriter::GetLambdaId(System.Linq.Expressions.LambdaExpression)
extern void DebugViewWriter_GetLambdaId_m600A3B6601D0A39414128ECCD086D2FC982CE2F8 (void);
// 0x000000E2 System.Int32 System.Linq.Expressions.DebugViewWriter::GetParamId(System.Linq.Expressions.ParameterExpression)
extern void DebugViewWriter_GetParamId_mF2D7C0DBD2D015183C4144D146FF6CC571828FF5 (void);
// 0x000000E3 System.Void System.Linq.Expressions.DebugViewWriter::WriteTo(System.Linq.Expressions.Expression,System.IO.TextWriter)
extern void DebugViewWriter_WriteTo_mE9FC855F96711325561F2230E5084164E2DD6D3D (void);
// 0x000000E4 System.Void System.Linq.Expressions.DebugViewWriter::WriteTo(System.Linq.Expressions.Expression)
extern void DebugViewWriter_WriteTo_m0A1D1436DD6350E17FF17A669FE9AC98A8799739 (void);
// 0x000000E5 System.Void System.Linq.Expressions.DebugViewWriter::Out(System.String)
extern void DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9 (void);
// 0x000000E6 System.Void System.Linq.Expressions.DebugViewWriter::Out(System.Linq.Expressions.DebugViewWriter/Flow,System.String)
extern void DebugViewWriter_Out_mE41A10255369FFD6EA17E155D904921EA5341E60 (void);
// 0x000000E7 System.Void System.Linq.Expressions.DebugViewWriter::Out(System.String,System.Linq.Expressions.DebugViewWriter/Flow)
extern void DebugViewWriter_Out_m9D84DEC1D4399A156421799FD716467C015C5572 (void);
// 0x000000E8 System.Void System.Linq.Expressions.DebugViewWriter::Out(System.Linq.Expressions.DebugViewWriter/Flow,System.String,System.Linq.Expressions.DebugViewWriter/Flow)
extern void DebugViewWriter_Out_mCB3ACA6A777368F20E30386DA0408FF242FB88ED (void);
// 0x000000E9 System.Void System.Linq.Expressions.DebugViewWriter::WriteLine()
extern void DebugViewWriter_WriteLine_m3E8D5B3D62E40FC0D2F7CE13F38DF3154134FB1C (void);
// 0x000000EA System.Void System.Linq.Expressions.DebugViewWriter::Write(System.String)
extern void DebugViewWriter_Write_m3A381F210100F8A1BE863CC86ED1133C8EEBF657 (void);
// 0x000000EB System.Linq.Expressions.DebugViewWriter/Flow System.Linq.Expressions.DebugViewWriter::GetFlow(System.Linq.Expressions.DebugViewWriter/Flow)
extern void DebugViewWriter_GetFlow_m17ADC4580FB0D11A43758036E926A18D43C93F1D (void);
// 0x000000EC System.Linq.Expressions.DebugViewWriter/Flow System.Linq.Expressions.DebugViewWriter::CheckBreak(System.Linq.Expressions.DebugViewWriter/Flow)
extern void DebugViewWriter_CheckBreak_m489ED42D926AE00CE9EA05189A14387067A90F90 (void);
// 0x000000ED System.Void System.Linq.Expressions.DebugViewWriter::VisitDeclarations(System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.ParameterExpression>)
extern void DebugViewWriter_VisitDeclarations_m3BECB60FF90D4F415CA424ED58B226AB0F4371F9 (void);
// 0x000000EE System.Void System.Linq.Expressions.DebugViewWriter::VisitExpressions(System.Char,System.Char,System.Collections.Generic.IReadOnlyList`1<T>,System.Action`1<T>)
// 0x000000EF System.Linq.Expressions.Expression System.Linq.Expressions.DebugViewWriter::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern void DebugViewWriter_VisitParameter_mBF33DABE19D15F42F60A7415C50495763284F185 (void);
// 0x000000F0 System.Linq.Expressions.Expression System.Linq.Expressions.DebugViewWriter::VisitExtension(System.Linq.Expressions.Expression)
extern void DebugViewWriter_VisitExtension_mEBD1A53ABA47B4933F5EDC35621D5E32ED8890DE (void);
// 0x000000F1 System.Void System.Linq.Expressions.DebugViewWriter::WriteLambda(System.Linq.Expressions.LambdaExpression)
extern void DebugViewWriter_WriteLambda_m2B1D6186813FDAC20429A303C10E0352C6517534 (void);
// 0x000000F2 System.String System.Linq.Expressions.DebugViewWriter::GetLambdaName(System.Linq.Expressions.LambdaExpression)
extern void DebugViewWriter_GetLambdaName_mEF3000A4C5E3CFA76CE0C0957A7BF013C9F6E8FF (void);
// 0x000000F3 System.Boolean System.Linq.Expressions.DebugViewWriter::ContainsWhiteSpace(System.String)
extern void DebugViewWriter_ContainsWhiteSpace_m82EB31571A6EB1BE2FF48CF281E7019AE5482977 (void);
// 0x000000F4 System.String System.Linq.Expressions.DebugViewWriter::QuoteName(System.String)
extern void DebugViewWriter_QuoteName_m9207018812DBE8EE87CD7FE6FEF3DBFC5FE08C48 (void);
// 0x000000F5 System.String System.Linq.Expressions.DebugViewWriter::GetDisplayName(System.String)
extern void DebugViewWriter_GetDisplayName_m9201AEB9EAFBB38C64C0912B47BF602762D94CEE (void);
// 0x000000F6 System.Void System.Linq.Expressions.DebugViewWriter::<VisitDeclarations>b__38_0(System.Linq.Expressions.ParameterExpression)
extern void DebugViewWriter_U3CVisitDeclarationsU3Eb__38_0_mFD45444F6A4FCBAB6E9D4F99A94AFF145D318B79 (void);
// 0x000000F7 System.Exception System.Linq.Expressions.Error::ReducibleMustOverrideReduce()
extern void Error_ReducibleMustOverrideReduce_m2C7087C6013A9880978BEC12F42E41FAA540B064 (void);
// 0x000000F8 System.Exception System.Linq.Expressions.Error::MustReduceToDifferent()
extern void Error_MustReduceToDifferent_mF680547D0DD8BFBA23EAFA58AACCCD2453ACCCF2 (void);
// 0x000000F9 System.Exception System.Linq.Expressions.Error::ReducedNotCompatible()
extern void Error_ReducedNotCompatible_m47BC6BDB5A46B36E50AF812744BF038CC31C6222 (void);
// 0x000000FA System.Exception System.Linq.Expressions.Error::MustBeReducible()
extern void Error_MustBeReducible_mBD3B935FFA34E22F696CD4DC5DD7F5BEE26F68DB (void);
// 0x000000FB System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD (void);
// 0x000000FC System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
extern void ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A (void);
// 0x000000FD System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
extern void ExpressionVisitor_Visit_mC73BA6F7A8B1A641FB901724B93B1535ED65351F (void);
// 0x000000FE System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitExtension(System.Linq.Expressions.Expression)
extern void ExpressionVisitor_VisitExtension_m59AFE769C6DFF530747400C1CC60E72D522E4AAB (void);
// 0x000000FF System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
extern void ExpressionVisitor_VisitParameter_mF8B8AD04580CA05FD98D4D6CE72D582ADE956B23 (void);
// 0x00000100 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
extern void LambdaExpression_get_Parameters_mAF114E7D91E405BC84EF2BC075E55E5717759066 (void);
// 0x00000101 System.String System.Linq.Expressions.LambdaExpression::get_Name()
extern void LambdaExpression_get_Name_m35878D5E071143E83A06696F1A1B8B1ACFF0EF40 (void);
// 0x00000102 System.String System.Linq.Expressions.LambdaExpression::get_NameCore()
extern void LambdaExpression_get_NameCore_mC8FC1EDE276792724F64D00D7E957CECC9800A5E (void);
// 0x00000103 System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x00000104 System.Type System.Linq.Expressions.LambdaExpression::get_ReturnType()
extern void LambdaExpression_get_ReturnType_mB82118BCB1EFB2BF4F6B7A4AAE091F7FEBB873C5 (void);
// 0x00000105 System.Boolean System.Linq.Expressions.LambdaExpression::get_TailCall()
extern void LambdaExpression_get_TailCall_mD77B216D0A4F3DAB152D3087BC9CDE969DBD6E1B (void);
// 0x00000106 System.Boolean System.Linq.Expressions.LambdaExpression::get_TailCallCore()
extern void LambdaExpression_get_TailCallCore_m1F0C74BE42352811C959B3AAF7C5E0B2E29014CC (void);
// 0x00000107 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::GetOrMakeParameters()
extern void LambdaExpression_GetOrMakeParameters_m61E8F42E6DA78629933558F71628B44E60DBD54C (void);
// 0x00000108 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x00000109 System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern void MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A (void);
// 0x0000010A System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x0000010B System.String System.Linq.Expressions.ParameterExpression::get_Name()
extern void ParameterExpression_get_Name_m58AB36FFDA560E226B841C95E436C22F1B7856C8 (void);
// 0x0000010C System.Boolean System.Linq.Expressions.ParameterExpression::get_IsByRef()
extern void ParameterExpression_get_IsByRef_mC47F92A5D61B9A7588509CCAF3A9223CE2E3BA17 (void);
// 0x0000010D System.Boolean System.Linq.Expressions.ParameterExpression::GetIsByRef()
extern void ParameterExpression_GetIsByRef_m483E4390ADBE1E4AF972BA93BE2FF3466CA2ED8A (void);
// 0x0000010E System.String System.Linq.Expressions.Strings::get_ReducibleMustOverrideReduce()
extern void Strings_get_ReducibleMustOverrideReduce_mF5500C3C98D00B4A807A98BCE996F07BA5EA2A09 (void);
// 0x0000010F System.String System.Linq.Expressions.Strings::get_MustReduceToDifferent()
extern void Strings_get_MustReduceToDifferent_m64F1E9D0C97AFEF77278E52273100A7A216ADC4E (void);
// 0x00000110 System.String System.Linq.Expressions.Strings::get_ReducedNotCompatible()
extern void Strings_get_ReducedNotCompatible_mEE06DE72A8E559A77150471BDC2DE895E2972FEF (void);
// 0x00000111 System.String System.Linq.Expressions.Strings::get_MustBeReducible()
extern void Strings_get_MustBeReducible_m76BE691A4DB1087255803138960C89AD5FA15C8B (void);
// 0x00000112 System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4 (void);
// 0x00000113 System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
extern void UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F (void);
// 0x00000114 System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::get_Method()
extern void UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0 (void);
// 0x00000115 System.Boolean System.Linq.Expressions.UnaryExpression::get_IsLifted()
extern void UnaryExpression_get_IsLifted_mD03B65CD13E5B8453866462CBF3FCD9D793AB9D1 (void);
// 0x00000116 System.Boolean System.Linq.Expressions.UnaryExpression::get_IsLiftedToNull()
extern void UnaryExpression_get_IsLiftedToNull_m9AF11583226E58CCBB91B1B8CD47F950DEC13C4D (void);
// 0x00000117 System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x00000118 System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x00000119 System.Boolean System.Dynamic.Utils.CacheDict`2::TryGetValue(TKey,TValue&)
// 0x0000011A System.Void System.Dynamic.Utils.CacheDict`2::Add(TKey,TValue)
// 0x0000011B System.Void System.Dynamic.Utils.CacheDict`2::set_Item(TKey,TValue)
// 0x0000011C System.Void System.Dynamic.Utils.CacheDict`2/Entry::.ctor(System.Int32,TKey,TValue)
// 0x0000011D System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619 (void);
// 0x0000011E System.Void System.Dynamic.Utils.ContractUtils::RequiresNotNull(System.Object,System.String)
extern void ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74 (void);
// 0x0000011F System.Reflection.ParameterInfo[] System.Dynamic.Utils.TypeExtensions::GetParametersCached(System.Reflection.MethodBase)
extern void TypeExtensions_GetParametersCached_m72979CFFD47C31423A7415BF9FE4CC9285F2FFB1 (void);
// 0x00000120 System.Void System.Dynamic.Utils.TypeExtensions::.cctor()
extern void TypeExtensions__cctor_m65CEECDB3C8308FB040FBD77B9C12621A2A14F41 (void);
// 0x00000121 System.Boolean System.Dynamic.Utils.TypeUtils::IsNullableType(System.Type)
extern void TypeUtils_IsNullableType_m5E0CD16DC1340A88AB858A19D91E68664814D370 (void);
// 0x00000122 System.Boolean System.Dynamic.Utils.TypeUtils::AreEquivalent(System.Type,System.Type)
extern void TypeUtils_AreEquivalent_m3D4693A06DB399C83408B8F83DF00FDD80D56E43 (void);
// 0x00000123 System.Boolean System.Dynamic.Utils.TypeUtils::AreReferenceAssignable(System.Type,System.Type)
extern void TypeUtils_AreReferenceAssignable_m21E45BA149BEB96E7803876FDCFCF202CB49E5E0 (void);
// 0x00000124 System.Reflection.Assembly System.Dynamic.Utils.TypeUtils::get_MsCorLib()
extern void TypeUtils_get_MsCorLib_m6A0A2C9B07667BFEFCC7CCE521194CF4CBE01F6D (void);
// 0x00000125 System.Boolean System.Dynamic.Utils.TypeUtils::CanCache(System.Type)
extern void TypeUtils_CanCache_m5E85D32F34B54FAF95BCFB567188BAF6C44B844C (void);
// 0x00000126 System.Reflection.MethodInfo System.Dynamic.Utils.TypeUtils::GetInvokeMethod(System.Type)
extern void TypeUtils_GetInvokeMethod_m72B1ADCFF5A3533AB362260283CA5252A5A8DF47 (void);
// 0x00000127 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000128 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000129 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000012A System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000012B System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000012C System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x0000012D System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000012E System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000012F System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000130 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000131 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000132 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000133 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000134 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000135 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000136 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000137 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000138 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000139 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000013A System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000013B System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000013C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000013D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000013E System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x0000013F System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x00000140 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000141 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000142 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000143 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000144 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x00000145 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x00000146 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000147 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000148 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000149 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000014A T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000014B System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000014C System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x0000014D System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>)
// 0x0000014E T[] System.Collections.Generic.ICollectionDebugView`1::get_Items()
static Il2CppMethodPointer s_methodPointers[334] = 
{
	SR_Format_m70EC8FB39078414D221479390E0E37253EF2D015,
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD,
	NULL,
	Enumerable_Max_mDCF86A7A86D2A183D045F007906336B3D989B46C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression_get_Type_m30E49D13EB342DDADA0D5A54979A5EF120E625E6,
	Expression_get_CanReduce_mEC1AEC0F8DB412619F80B3B5078F904EFFB1D7F9,
	Expression_Reduce_mA884731A64882F6E9267B56B989756B64D77168E,
	Expression_VisitChildren_m5E48C3529D41B6386FFC3741E3D510BA929347B0,
	Expression_Accept_m006B7D9BA94F93215542BC12250126255643CA60,
	Expression_ReduceAndCheck_mA1B79AA88821432A02C6FF36516E211F5D30844D,
	Expression_get_DebugView_m1776A0E2AFD08E2D63118973941FE45E891DFC95,
	Expression__cctor_m2A3A9925C45A620D65CDAB448E78F96F6D1399BC,
	LambdaExpressionProxy__ctor_mE67B77D8C8EE9234AA895F8BCBC962A97FEE182D,
	LambdaExpressionProxy_get_Body_m336855259878E44F7FC0636D8A6D1B1E102C3D1B,
	LambdaExpressionProxy_get_CanReduce_mD164307D2AE3DC9346570AC3571E8B374A307C2D,
	LambdaExpressionProxy_get_DebugView_m715D27928C3423E2E766CC7AB19EB468AC5BD226,
	LambdaExpressionProxy_get_Name_m17772DCD291ECC9B5D93C74B10ED01B156C22D00,
	LambdaExpressionProxy_get_NodeType_mE6C18979DD227A112C6B764B73B746F903355476,
	LambdaExpressionProxy_get_Parameters_mCF32AAD0EB16D9BCFFED24CFDE14455E77F4A55E,
	LambdaExpressionProxy_get_ReturnType_m07DFE63EDDFFFFF5ED81902726B987DD3D1D59DB,
	LambdaExpressionProxy_get_TailCall_m7A7DEF8F33CEEEEC3BA8C841F395B7C53EFABD1A,
	LambdaExpressionProxy_get_Type_m002CE181B0B4CF207263AA074A6BBF4551A36D24,
	MemberExpressionProxy__ctor_m1BA55D909CDB2196227C0B78A77A3D33F2B94B6B,
	MemberExpressionProxy_get_CanReduce_mA11693CD644E9F048CEB4BAEB17C6118B95CED82,
	MemberExpressionProxy_get_DebugView_mDB528F31B43CE5E0C3D9EF6D784E01CBBD7A20FF,
	MemberExpressionProxy_get_Expression_m3019C7DE7AA56A596E89CF10B6BA3B86191F7CED,
	MemberExpressionProxy_get_Member_m09E5609580E0D3232E45EE596D4ADD71BFFCAAAF,
	MemberExpressionProxy_get_NodeType_m41071E79C9611D635E37C7DB00911B98CFB199B2,
	MemberExpressionProxy_get_Type_m1D907F160E8DEE7B2FC1FF0FC4D8235F966729C5,
	ParameterExpressionProxy__ctor_m512E4E9BFA75311C21A8DE48C988949578EE5A6E,
	ParameterExpressionProxy_get_CanReduce_mEE6C42D23E3468B67D99310AC81996459842E76B,
	ParameterExpressionProxy_get_DebugView_m5582B159BDF7073480EC3CAB0930F507E8446700,
	ParameterExpressionProxy_get_IsByRef_mB46CABBB0577E16137A8C069E84E33CE156CB8B9,
	ParameterExpressionProxy_get_Name_m598641A441D49736360F23DB78F2DC9C7369729D,
	ParameterExpressionProxy_get_NodeType_m2F66DDBBF9FD7C0C5D8D773D2C0874E18D3597FD,
	ParameterExpressionProxy_get_Type_mECC882B066D090647DC031A8528B7D9A4DD19EAE,
	UnaryExpressionProxy__ctor_mBE2760F1C0B7BC264D24FFAC9A4E7AA2817466AD,
	UnaryExpressionProxy_get_CanReduce_m141F3E1B25D48EF55994F2A9F002FCE44114F9B5,
	UnaryExpressionProxy_get_DebugView_mDC12786870436859E28F6EA116D4F65DE4AA317F,
	UnaryExpressionProxy_get_IsLifted_m02711F19877DD776AAA429B2C6A8F2A782482F4C,
	UnaryExpressionProxy_get_IsLiftedToNull_m94A4182EE0D544A769D1071646577765B3E99210,
	UnaryExpressionProxy_get_Method_mD468D07C1706E50B68D758849CAD6CF38BF1F037,
	UnaryExpressionProxy_get_NodeType_m69F8674646A055442E4C548956FE60211E2234ED,
	UnaryExpressionProxy_get_Operand_m470F3412A4760BB05EE699C9F269D26E8273D174,
	UnaryExpressionProxy_get_Type_m01D40A87D5AD89AEA64FD691587AA4F5C95020AD,
	DebugViewWriter__ctor_mE2431D1C20D0785EEF2BD3005EF612D8C15F6CC3,
	DebugViewWriter_get_Base_m9ADE61E5B742C3C4AAC3B596F0DA7CA06682D416,
	DebugViewWriter_get_Delta_m5A340CD5E59816614646586CFE94B6FA2FED92C7,
	DebugViewWriter_get_Depth_m6B959DC41B3AF4A6A2C9A9C699F73A910159813D,
	DebugViewWriter_Indent_m981634432758477A3D6126AAA3E81B59F8FCB8D7,
	DebugViewWriter_Dedent_m9BDEB16BB0EAF6F5DB0D91670FDCE68306F27986,
	DebugViewWriter_NewLine_m0CA66BCE5A3CE16386385B4B2C9CA8C6C53959E0,
	NULL,
	DebugViewWriter_GetLambdaId_m600A3B6601D0A39414128ECCD086D2FC982CE2F8,
	DebugViewWriter_GetParamId_mF2D7C0DBD2D015183C4144D146FF6CC571828FF5,
	DebugViewWriter_WriteTo_mE9FC855F96711325561F2230E5084164E2DD6D3D,
	DebugViewWriter_WriteTo_m0A1D1436DD6350E17FF17A669FE9AC98A8799739,
	DebugViewWriter_Out_m2781DD3322DACFD7DCF0D318559B0FBA9EFAA1F9,
	DebugViewWriter_Out_mE41A10255369FFD6EA17E155D904921EA5341E60,
	DebugViewWriter_Out_m9D84DEC1D4399A156421799FD716467C015C5572,
	DebugViewWriter_Out_mCB3ACA6A777368F20E30386DA0408FF242FB88ED,
	DebugViewWriter_WriteLine_m3E8D5B3D62E40FC0D2F7CE13F38DF3154134FB1C,
	DebugViewWriter_Write_m3A381F210100F8A1BE863CC86ED1133C8EEBF657,
	DebugViewWriter_GetFlow_m17ADC4580FB0D11A43758036E926A18D43C93F1D,
	DebugViewWriter_CheckBreak_m489ED42D926AE00CE9EA05189A14387067A90F90,
	DebugViewWriter_VisitDeclarations_m3BECB60FF90D4F415CA424ED58B226AB0F4371F9,
	NULL,
	DebugViewWriter_VisitParameter_mBF33DABE19D15F42F60A7415C50495763284F185,
	DebugViewWriter_VisitExtension_mEBD1A53ABA47B4933F5EDC35621D5E32ED8890DE,
	DebugViewWriter_WriteLambda_m2B1D6186813FDAC20429A303C10E0352C6517534,
	DebugViewWriter_GetLambdaName_mEF3000A4C5E3CFA76CE0C0957A7BF013C9F6E8FF,
	DebugViewWriter_ContainsWhiteSpace_m82EB31571A6EB1BE2FF48CF281E7019AE5482977,
	DebugViewWriter_QuoteName_m9207018812DBE8EE87CD7FE6FEF3DBFC5FE08C48,
	DebugViewWriter_GetDisplayName_m9201AEB9EAFBB38C64C0912B47BF602762D94CEE,
	DebugViewWriter_U3CVisitDeclarationsU3Eb__38_0_mFD45444F6A4FCBAB6E9D4F99A94AFF145D318B79,
	Error_ReducibleMustOverrideReduce_m2C7087C6013A9880978BEC12F42E41FAA540B064,
	Error_MustReduceToDifferent_mF680547D0DD8BFBA23EAFA58AACCCD2453ACCCF2,
	Error_ReducedNotCompatible_m47BC6BDB5A46B36E50AF812744BF038CC31C6222,
	Error_MustBeReducible_mBD3B935FFA34E22F696CD4DC5DD7F5BEE26F68DB,
	Error_ExtensionNodeMustOverrideProperty_mFED05679017FEB8E36E9A205F447C80DC82397CD,
	ExpressionVisitor__ctor_m45ACF0744BAD52FCD928645D7D4173CA25DD332A,
	ExpressionVisitor_Visit_mC73BA6F7A8B1A641FB901724B93B1535ED65351F,
	ExpressionVisitor_VisitExtension_m59AFE769C6DFF530747400C1CC60E72D522E4AAB,
	ExpressionVisitor_VisitParameter_mF8B8AD04580CA05FD98D4D6CE72D582ADE956B23,
	LambdaExpression_get_Parameters_mAF114E7D91E405BC84EF2BC075E55E5717759066,
	LambdaExpression_get_Name_m35878D5E071143E83A06696F1A1B8B1ACFF0EF40,
	LambdaExpression_get_NameCore_mC8FC1EDE276792724F64D00D7E957CECC9800A5E,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	LambdaExpression_get_ReturnType_mB82118BCB1EFB2BF4F6B7A4AAE091F7FEBB873C5,
	LambdaExpression_get_TailCall_mD77B216D0A4F3DAB152D3087BC9CDE969DBD6E1B,
	LambdaExpression_get_TailCallCore_m1F0C74BE42352811C959B3AAF7C5E0B2E29014CC,
	LambdaExpression_GetOrMakeParameters_m61E8F42E6DA78629933558F71628B44E60DBD54C,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	ParameterExpression_get_Name_m58AB36FFDA560E226B841C95E436C22F1B7856C8,
	ParameterExpression_get_IsByRef_mC47F92A5D61B9A7588509CCAF3A9223CE2E3BA17,
	ParameterExpression_GetIsByRef_m483E4390ADBE1E4AF972BA93BE2FF3466CA2ED8A,
	Strings_get_ReducibleMustOverrideReduce_mF5500C3C98D00B4A807A98BCE996F07BA5EA2A09,
	Strings_get_MustReduceToDifferent_m64F1E9D0C97AFEF77278E52273100A7A216ADC4E,
	Strings_get_ReducedNotCompatible_mEE06DE72A8E559A77150471BDC2DE895E2972FEF,
	Strings_get_MustBeReducible_m76BE691A4DB1087255803138960C89AD5FA15C8B,
	Strings_ExtensionNodeMustOverrideProperty_mC172EE71CBF1DF8690C7B4D39E14FC93B80062E4,
	UnaryExpression_get_Operand_m08244426ECF6990AD49742ECE8273F599B648B3F,
	UnaryExpression_get_Method_mF7A38BDDAD6A7507D7D301371599CE0B9489A7E0,
	UnaryExpression_get_IsLifted_mD03B65CD13E5B8453866462CBF3FCD9D793AB9D1,
	UnaryExpression_get_IsLiftedToNull_m9AF11583226E58CCBB91B1B8CD47F950DEC13C4D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m1BAFF1BD51707EFF0385DFC088AA21DA02352619,
	ContractUtils_RequiresNotNull_m40FE6A6753EA59B5E25F4B7B009636E6F939CE74,
	TypeExtensions_GetParametersCached_m72979CFFD47C31423A7415BF9FE4CC9285F2FFB1,
	TypeExtensions__cctor_m65CEECDB3C8308FB040FBD77B9C12621A2A14F41,
	TypeUtils_IsNullableType_m5E0CD16DC1340A88AB858A19D91E68664814D370,
	TypeUtils_AreEquivalent_m3D4693A06DB399C83408B8F83DF00FDD80D56E43,
	TypeUtils_AreReferenceAssignable_m21E45BA149BEB96E7803876FDCFCF202CB49E5E0,
	TypeUtils_get_MsCorLib_m6A0A2C9B07667BFEFCC7CCE521194CF4CBE01F6D,
	TypeUtils_CanCache_m5E85D32F34B54FAF95BCFB567188BAF6C44B844C,
	TypeUtils_GetInvokeMethod_m72B1ADCFF5A3533AB362260283CA5252A5A8DF47,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[334] = 
{
	4539,
	4932,
	5158,
	5158,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	4863,
	-1,
	4863,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3221,
	3238,
	3175,
	3238,
	2314,
	2314,
	3238,
	3238,
	5186,
	2626,
	3238,
	3175,
	3238,
	3238,
	3221,
	3238,
	3238,
	3175,
	3238,
	2626,
	3175,
	3238,
	3238,
	3238,
	3221,
	3238,
	2626,
	3175,
	3238,
	3175,
	3238,
	3221,
	3238,
	2626,
	3175,
	3238,
	3175,
	3175,
	3238,
	3221,
	3238,
	3238,
	2626,
	3221,
	3221,
	3221,
	3295,
	3295,
	3295,
	-1,
	2166,
	2166,
	4689,
	2626,
	2626,
	1325,
	1441,
	803,
	3295,
	2626,
	2153,
	2153,
	2626,
	-1,
	2314,
	2314,
	2626,
	2314,
	4784,
	4932,
	4932,
	2626,
	5158,
	5158,
	5158,
	5158,
	4932,
	3295,
	2314,
	2314,
	2314,
	3238,
	3238,
	3238,
	3238,
	3238,
	3175,
	3175,
	3238,
	3238,
	3238,
	3238,
	3238,
	3175,
	3175,
	5158,
	5158,
	5158,
	5158,
	4932,
	3238,
	3238,
	3175,
	3175,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	5158,
	4689,
	4932,
	5186,
	4784,
	4382,
	4382,
	5158,
	4784,
	4932,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[73] = 
{
	{ 0x02000005, { 104, 4 } },
	{ 0x02000006, { 108, 9 } },
	{ 0x02000007, { 119, 7 } },
	{ 0x02000008, { 128, 10 } },
	{ 0x02000009, { 140, 11 } },
	{ 0x0200000A, { 154, 9 } },
	{ 0x0200000B, { 166, 12 } },
	{ 0x0200000C, { 181, 1 } },
	{ 0x0200000D, { 182, 2 } },
	{ 0x0200000E, { 184, 12 } },
	{ 0x0200000F, { 196, 8 } },
	{ 0x02000010, { 204, 11 } },
	{ 0x02000011, { 215, 11 } },
	{ 0x02000012, { 226, 6 } },
	{ 0x02000013, { 232, 6 } },
	{ 0x02000014, { 238, 2 } },
	{ 0x02000016, { 240, 8 } },
	{ 0x02000018, { 248, 3 } },
	{ 0x02000019, { 253, 5 } },
	{ 0x0200001A, { 258, 7 } },
	{ 0x0200001B, { 265, 3 } },
	{ 0x0200001C, { 268, 7 } },
	{ 0x0200001D, { 275, 4 } },
	{ 0x0200002F, { 288, 9 } },
	{ 0x02000034, { 297, 36 } },
	{ 0x02000036, { 333, 2 } },
	{ 0x02000037, { 335, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 1 } },
	{ 0x0600000F, { 39, 1 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 1 } },
	{ 0x06000012, { 43, 2 } },
	{ 0x06000013, { 45, 1 } },
	{ 0x06000014, { 46, 2 } },
	{ 0x06000015, { 48, 1 } },
	{ 0x06000016, { 49, 5 } },
	{ 0x06000017, { 54, 3 } },
	{ 0x06000018, { 57, 2 } },
	{ 0x06000019, { 59, 2 } },
	{ 0x0600001A, { 61, 2 } },
	{ 0x0600001B, { 63, 4 } },
	{ 0x0600001C, { 67, 4 } },
	{ 0x0600001D, { 71, 3 } },
	{ 0x0600001E, { 74, 4 } },
	{ 0x0600001F, { 78, 4 } },
	{ 0x06000020, { 82, 3 } },
	{ 0x06000021, { 85, 1 } },
	{ 0x06000022, { 86, 1 } },
	{ 0x06000023, { 87, 3 } },
	{ 0x06000024, { 90, 3 } },
	{ 0x06000025, { 93, 2 } },
	{ 0x06000026, { 95, 2 } },
	{ 0x06000027, { 97, 5 } },
	{ 0x06000029, { 102, 1 } },
	{ 0x0600002B, { 103, 1 } },
	{ 0x0600003B, { 117, 2 } },
	{ 0x06000040, { 126, 2 } },
	{ 0x06000045, { 138, 2 } },
	{ 0x0600004B, { 151, 3 } },
	{ 0x06000050, { 163, 3 } },
	{ 0x06000055, { 178, 3 } },
	{ 0x0600009B, { 251, 2 } },
	{ 0x060000E0, { 279, 5 } },
	{ 0x060000EE, { 284, 4 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[337] = 
{
	{ (Il2CppRGCTXDataType)2, 2621 },
	{ (Il2CppRGCTXDataType)3, 11263 },
	{ (Il2CppRGCTXDataType)2, 4007 },
	{ (Il2CppRGCTXDataType)2, 3467 },
	{ (Il2CppRGCTXDataType)3, 18836 },
	{ (Il2CppRGCTXDataType)2, 2747 },
	{ (Il2CppRGCTXDataType)2, 3474 },
	{ (Il2CppRGCTXDataType)3, 18951 },
	{ (Il2CppRGCTXDataType)2, 3469 },
	{ (Il2CppRGCTXDataType)3, 18874 },
	{ (Il2CppRGCTXDataType)2, 2622 },
	{ (Il2CppRGCTXDataType)3, 11264 },
	{ (Il2CppRGCTXDataType)2, 4046 },
	{ (Il2CppRGCTXDataType)2, 3479 },
	{ (Il2CppRGCTXDataType)3, 18992 },
	{ (Il2CppRGCTXDataType)2, 2767 },
	{ (Il2CppRGCTXDataType)2, 3487 },
	{ (Il2CppRGCTXDataType)3, 19768 },
	{ (Il2CppRGCTXDataType)2, 3483 },
	{ (Il2CppRGCTXDataType)3, 19346 },
	{ (Il2CppRGCTXDataType)2, 854 },
	{ (Il2CppRGCTXDataType)3, 59 },
	{ (Il2CppRGCTXDataType)3, 60 },
	{ (Il2CppRGCTXDataType)2, 1490 },
	{ (Il2CppRGCTXDataType)3, 7782 },
	{ (Il2CppRGCTXDataType)2, 856 },
	{ (Il2CppRGCTXDataType)3, 87 },
	{ (Il2CppRGCTXDataType)3, 88 },
	{ (Il2CppRGCTXDataType)2, 1515 },
	{ (Il2CppRGCTXDataType)3, 7790 },
	{ (Il2CppRGCTXDataType)3, 23687 },
	{ (Il2CppRGCTXDataType)2, 872 },
	{ (Il2CppRGCTXDataType)3, 480 },
	{ (Il2CppRGCTXDataType)3, 23711 },
	{ (Il2CppRGCTXDataType)2, 876 },
	{ (Il2CppRGCTXDataType)3, 566 },
	{ (Il2CppRGCTXDataType)2, 3149 },
	{ (Il2CppRGCTXDataType)3, 16824 },
	{ (Il2CppRGCTXDataType)3, 8871 },
	{ (Il2CppRGCTXDataType)3, 23589 },
	{ (Il2CppRGCTXDataType)2, 859 },
	{ (Il2CppRGCTXDataType)3, 354 },
	{ (Il2CppRGCTXDataType)3, 23598 },
	{ (Il2CppRGCTXDataType)2, 865 },
	{ (Il2CppRGCTXDataType)3, 420 },
	{ (Il2CppRGCTXDataType)3, 23629 },
	{ (Il2CppRGCTXDataType)2, 870 },
	{ (Il2CppRGCTXDataType)3, 461 },
	{ (Il2CppRGCTXDataType)3, 23698 },
	{ (Il2CppRGCTXDataType)3, 7088 },
	{ (Il2CppRGCTXDataType)2, 1382 },
	{ (Il2CppRGCTXDataType)2, 1905 },
	{ (Il2CppRGCTXDataType)2, 2078 },
	{ (Il2CppRGCTXDataType)2, 2207 },
	{ (Il2CppRGCTXDataType)2, 997 },
	{ (Il2CppRGCTXDataType)3, 1483 },
	{ (Il2CppRGCTXDataType)3, 1484 },
	{ (Il2CppRGCTXDataType)2, 2748 },
	{ (Il2CppRGCTXDataType)3, 12268 },
	{ (Il2CppRGCTXDataType)2, 1906 },
	{ (Il2CppRGCTXDataType)3, 23406 },
	{ (Il2CppRGCTXDataType)2, 857 },
	{ (Il2CppRGCTXDataType)3, 331 },
	{ (Il2CppRGCTXDataType)2, 2352 },
	{ (Il2CppRGCTXDataType)2, 1763 },
	{ (Il2CppRGCTXDataType)2, 1922 },
	{ (Il2CppRGCTXDataType)2, 2079 },
	{ (Il2CppRGCTXDataType)2, 2353 },
	{ (Il2CppRGCTXDataType)2, 1764 },
	{ (Il2CppRGCTXDataType)2, 1923 },
	{ (Il2CppRGCTXDataType)2, 2080 },
	{ (Il2CppRGCTXDataType)2, 1924 },
	{ (Il2CppRGCTXDataType)2, 2081 },
	{ (Il2CppRGCTXDataType)3, 7783 },
	{ (Il2CppRGCTXDataType)2, 2354 },
	{ (Il2CppRGCTXDataType)2, 1765 },
	{ (Il2CppRGCTXDataType)2, 1925 },
	{ (Il2CppRGCTXDataType)2, 2082 },
	{ (Il2CppRGCTXDataType)2, 2355 },
	{ (Il2CppRGCTXDataType)2, 1766 },
	{ (Il2CppRGCTXDataType)2, 1926 },
	{ (Il2CppRGCTXDataType)2, 2083 },
	{ (Il2CppRGCTXDataType)2, 1927 },
	{ (Il2CppRGCTXDataType)2, 2084 },
	{ (Il2CppRGCTXDataType)3, 7784 },
	{ (Il2CppRGCTXDataType)2, 1303 },
	{ (Il2CppRGCTXDataType)2, 1900 },
	{ (Il2CppRGCTXDataType)2, 1901 },
	{ (Il2CppRGCTXDataType)2, 2076 },
	{ (Il2CppRGCTXDataType)3, 7781 },
	{ (Il2CppRGCTXDataType)2, 1899 },
	{ (Il2CppRGCTXDataType)2, 2075 },
	{ (Il2CppRGCTXDataType)3, 7780 },
	{ (Il2CppRGCTXDataType)2, 1762 },
	{ (Il2CppRGCTXDataType)2, 1919 },
	{ (Il2CppRGCTXDataType)2, 1761 },
	{ (Il2CppRGCTXDataType)3, 23556 },
	{ (Il2CppRGCTXDataType)3, 7087 },
	{ (Il2CppRGCTXDataType)2, 1381 },
	{ (Il2CppRGCTXDataType)2, 1903 },
	{ (Il2CppRGCTXDataType)2, 2077 },
	{ (Il2CppRGCTXDataType)2, 2206 },
	{ (Il2CppRGCTXDataType)3, 23634 },
	{ (Il2CppRGCTXDataType)3, 23633 },
	{ (Il2CppRGCTXDataType)3, 11265 },
	{ (Il2CppRGCTXDataType)3, 11267 },
	{ (Il2CppRGCTXDataType)2, 622 },
	{ (Il2CppRGCTXDataType)3, 11266 },
	{ (Il2CppRGCTXDataType)3, 11275 },
	{ (Il2CppRGCTXDataType)2, 2625 },
	{ (Il2CppRGCTXDataType)2, 3470 },
	{ (Il2CppRGCTXDataType)3, 18875 },
	{ (Il2CppRGCTXDataType)3, 11276 },
	{ (Il2CppRGCTXDataType)2, 1989 },
	{ (Il2CppRGCTXDataType)2, 2122 },
	{ (Il2CppRGCTXDataType)3, 7799 },
	{ (Il2CppRGCTXDataType)3, 23410 },
	{ (Il2CppRGCTXDataType)2, 3484 },
	{ (Il2CppRGCTXDataType)3, 19347 },
	{ (Il2CppRGCTXDataType)3, 11268 },
	{ (Il2CppRGCTXDataType)2, 2624 },
	{ (Il2CppRGCTXDataType)2, 3468 },
	{ (Il2CppRGCTXDataType)3, 18837 },
	{ (Il2CppRGCTXDataType)3, 7798 },
	{ (Il2CppRGCTXDataType)3, 11269 },
	{ (Il2CppRGCTXDataType)3, 23409 },
	{ (Il2CppRGCTXDataType)2, 3480 },
	{ (Il2CppRGCTXDataType)3, 18993 },
	{ (Il2CppRGCTXDataType)3, 11282 },
	{ (Il2CppRGCTXDataType)2, 2626 },
	{ (Il2CppRGCTXDataType)2, 3475 },
	{ (Il2CppRGCTXDataType)3, 18952 },
	{ (Il2CppRGCTXDataType)3, 12318 },
	{ (Il2CppRGCTXDataType)3, 5553 },
	{ (Il2CppRGCTXDataType)3, 7800 },
	{ (Il2CppRGCTXDataType)3, 5552 },
	{ (Il2CppRGCTXDataType)3, 11283 },
	{ (Il2CppRGCTXDataType)3, 23411 },
	{ (Il2CppRGCTXDataType)2, 3488 },
	{ (Il2CppRGCTXDataType)3, 19769 },
	{ (Il2CppRGCTXDataType)3, 11296 },
	{ (Il2CppRGCTXDataType)2, 2628 },
	{ (Il2CppRGCTXDataType)2, 3486 },
	{ (Il2CppRGCTXDataType)3, 19349 },
	{ (Il2CppRGCTXDataType)3, 11297 },
	{ (Il2CppRGCTXDataType)2, 1992 },
	{ (Il2CppRGCTXDataType)2, 2125 },
	{ (Il2CppRGCTXDataType)3, 7804 },
	{ (Il2CppRGCTXDataType)3, 7803 },
	{ (Il2CppRGCTXDataType)2, 3472 },
	{ (Il2CppRGCTXDataType)3, 18877 },
	{ (Il2CppRGCTXDataType)3, 23424 },
	{ (Il2CppRGCTXDataType)2, 3485 },
	{ (Il2CppRGCTXDataType)3, 19348 },
	{ (Il2CppRGCTXDataType)3, 11289 },
	{ (Il2CppRGCTXDataType)2, 2627 },
	{ (Il2CppRGCTXDataType)2, 3482 },
	{ (Il2CppRGCTXDataType)3, 18995 },
	{ (Il2CppRGCTXDataType)3, 7802 },
	{ (Il2CppRGCTXDataType)3, 7801 },
	{ (Il2CppRGCTXDataType)3, 11290 },
	{ (Il2CppRGCTXDataType)2, 3471 },
	{ (Il2CppRGCTXDataType)3, 18876 },
	{ (Il2CppRGCTXDataType)3, 23423 },
	{ (Il2CppRGCTXDataType)2, 3481 },
	{ (Il2CppRGCTXDataType)3, 18994 },
	{ (Il2CppRGCTXDataType)3, 11303 },
	{ (Il2CppRGCTXDataType)2, 2629 },
	{ (Il2CppRGCTXDataType)2, 3490 },
	{ (Il2CppRGCTXDataType)3, 19771 },
	{ (Il2CppRGCTXDataType)3, 12319 },
	{ (Il2CppRGCTXDataType)3, 5555 },
	{ (Il2CppRGCTXDataType)3, 7806 },
	{ (Il2CppRGCTXDataType)3, 7805 },
	{ (Il2CppRGCTXDataType)3, 5554 },
	{ (Il2CppRGCTXDataType)3, 11304 },
	{ (Il2CppRGCTXDataType)2, 3473 },
	{ (Il2CppRGCTXDataType)3, 18878 },
	{ (Il2CppRGCTXDataType)3, 23425 },
	{ (Il2CppRGCTXDataType)2, 3489 },
	{ (Il2CppRGCTXDataType)3, 19770 },
	{ (Il2CppRGCTXDataType)3, 7795 },
	{ (Il2CppRGCTXDataType)3, 7796 },
	{ (Il2CppRGCTXDataType)3, 7810 },
	{ (Il2CppRGCTXDataType)3, 483 },
	{ (Il2CppRGCTXDataType)3, 482 },
	{ (Il2CppRGCTXDataType)2, 1981 },
	{ (Il2CppRGCTXDataType)2, 2116 },
	{ (Il2CppRGCTXDataType)3, 7797 },
	{ (Il2CppRGCTXDataType)2, 2004 },
	{ (Il2CppRGCTXDataType)2, 2143 },
	{ (Il2CppRGCTXDataType)3, 485 },
	{ (Il2CppRGCTXDataType)2, 795 },
	{ (Il2CppRGCTXDataType)2, 873 },
	{ (Il2CppRGCTXDataType)3, 481 },
	{ (Il2CppRGCTXDataType)3, 484 },
	{ (Il2CppRGCTXDataType)3, 568 },
	{ (Il2CppRGCTXDataType)2, 1984 },
	{ (Il2CppRGCTXDataType)2, 2118 },
	{ (Il2CppRGCTXDataType)3, 570 },
	{ (Il2CppRGCTXDataType)2, 620 },
	{ (Il2CppRGCTXDataType)2, 877 },
	{ (Il2CppRGCTXDataType)3, 567 },
	{ (Il2CppRGCTXDataType)3, 569 },
	{ (Il2CppRGCTXDataType)3, 356 },
	{ (Il2CppRGCTXDataType)2, 3272 },
	{ (Il2CppRGCTXDataType)3, 17650 },
	{ (Il2CppRGCTXDataType)2, 1972 },
	{ (Il2CppRGCTXDataType)2, 2111 },
	{ (Il2CppRGCTXDataType)3, 17651 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)2, 613 },
	{ (Il2CppRGCTXDataType)2, 860 },
	{ (Il2CppRGCTXDataType)3, 355 },
	{ (Il2CppRGCTXDataType)3, 357 },
	{ (Il2CppRGCTXDataType)3, 422 },
	{ (Il2CppRGCTXDataType)2, 3274 },
	{ (Il2CppRGCTXDataType)3, 17652 },
	{ (Il2CppRGCTXDataType)2, 1975 },
	{ (Il2CppRGCTXDataType)2, 2113 },
	{ (Il2CppRGCTXDataType)3, 17653 },
	{ (Il2CppRGCTXDataType)3, 424 },
	{ (Il2CppRGCTXDataType)2, 615 },
	{ (Il2CppRGCTXDataType)2, 866 },
	{ (Il2CppRGCTXDataType)3, 421 },
	{ (Il2CppRGCTXDataType)3, 423 },
	{ (Il2CppRGCTXDataType)2, 998 },
	{ (Il2CppRGCTXDataType)3, 1485 },
	{ (Il2CppRGCTXDataType)2, 617 },
	{ (Il2CppRGCTXDataType)2, 871 },
	{ (Il2CppRGCTXDataType)3, 462 },
	{ (Il2CppRGCTXDataType)3, 463 },
	{ (Il2CppRGCTXDataType)3, 333 },
	{ (Il2CppRGCTXDataType)2, 611 },
	{ (Il2CppRGCTXDataType)3, 335 },
	{ (Il2CppRGCTXDataType)2, 858 },
	{ (Il2CppRGCTXDataType)3, 332 },
	{ (Il2CppRGCTXDataType)3, 334 },
	{ (Il2CppRGCTXDataType)2, 4054 },
	{ (Il2CppRGCTXDataType)2, 1304 },
	{ (Il2CppRGCTXDataType)3, 7125 },
	{ (Il2CppRGCTXDataType)2, 1398 },
	{ (Il2CppRGCTXDataType)2, 4144 },
	{ (Il2CppRGCTXDataType)3, 17647 },
	{ (Il2CppRGCTXDataType)3, 17648 },
	{ (Il2CppRGCTXDataType)2, 2223 },
	{ (Il2CppRGCTXDataType)3, 17649 },
	{ (Il2CppRGCTXDataType)2, 546 },
	{ (Il2CppRGCTXDataType)2, 867 },
	{ (Il2CppRGCTXDataType)3, 434 },
	{ (Il2CppRGCTXDataType)3, 16811 },
	{ (Il2CppRGCTXDataType)2, 3150 },
	{ (Il2CppRGCTXDataType)3, 16825 },
	{ (Il2CppRGCTXDataType)2, 1000 },
	{ (Il2CppRGCTXDataType)3, 1486 },
	{ (Il2CppRGCTXDataType)3, 16817 },
	{ (Il2CppRGCTXDataType)3, 5530 },
	{ (Il2CppRGCTXDataType)2, 654 },
	{ (Il2CppRGCTXDataType)3, 16812 },
	{ (Il2CppRGCTXDataType)2, 3146 },
	{ (Il2CppRGCTXDataType)3, 1624 },
	{ (Il2CppRGCTXDataType)2, 1039 },
	{ (Il2CppRGCTXDataType)2, 1349 },
	{ (Il2CppRGCTXDataType)3, 5536 },
	{ (Il2CppRGCTXDataType)3, 16813 },
	{ (Il2CppRGCTXDataType)3, 5525 },
	{ (Il2CppRGCTXDataType)3, 5526 },
	{ (Il2CppRGCTXDataType)3, 5524 },
	{ (Il2CppRGCTXDataType)3, 5527 },
	{ (Il2CppRGCTXDataType)2, 1345 },
	{ (Il2CppRGCTXDataType)2, 4117 },
	{ (Il2CppRGCTXDataType)3, 7792 },
	{ (Il2CppRGCTXDataType)3, 5529 },
	{ (Il2CppRGCTXDataType)2, 1873 },
	{ (Il2CppRGCTXDataType)3, 5528 },
	{ (Il2CppRGCTXDataType)2, 1769 },
	{ (Il2CppRGCTXDataType)2, 4049 },
	{ (Il2CppRGCTXDataType)2, 1946 },
	{ (Il2CppRGCTXDataType)2, 2089 },
	{ (Il2CppRGCTXDataType)2, 1094 },
	{ (Il2CppRGCTXDataType)3, 2227 },
	{ (Il2CppRGCTXDataType)3, 2228 },
	{ (Il2CppRGCTXDataType)3, 2229 },
	{ (Il2CppRGCTXDataType)3, 2230 },
	{ (Il2CppRGCTXDataType)2, 1898 },
	{ (Il2CppRGCTXDataType)2, 2074 },
	{ (Il2CppRGCTXDataType)2, 2454 },
	{ (Il2CppRGCTXDataType)3, 590 },
	{ (Il2CppRGCTXDataType)3, 1514 },
	{ (Il2CppRGCTXDataType)2, 1002 },
	{ (Il2CppRGCTXDataType)2, 4120 },
	{ (Il2CppRGCTXDataType)2, 437 },
	{ (Il2CppRGCTXDataType)3, 24677 },
	{ (Il2CppRGCTXDataType)2, 1308 },
	{ (Il2CppRGCTXDataType)3, 5505 },
	{ (Il2CppRGCTXDataType)3, 24682 },
	{ (Il2CppRGCTXDataType)3, 1513 },
	{ (Il2CppRGCTXDataType)3, 7106 },
	{ (Il2CppRGCTXDataType)2, 1391 },
	{ (Il2CppRGCTXDataType)3, 8560 },
	{ (Il2CppRGCTXDataType)3, 8561 },
	{ (Il2CppRGCTXDataType)2, 1728 },
	{ (Il2CppRGCTXDataType)3, 8564 },
	{ (Il2CppRGCTXDataType)2, 1728 },
	{ (Il2CppRGCTXDataType)3, 8566 },
	{ (Il2CppRGCTXDataType)2, 1772 },
	{ (Il2CppRGCTXDataType)3, 8570 },
	{ (Il2CppRGCTXDataType)3, 8575 },
	{ (Il2CppRGCTXDataType)3, 8574 },
	{ (Il2CppRGCTXDataType)2, 4142 },
	{ (Il2CppRGCTXDataType)3, 8563 },
	{ (Il2CppRGCTXDataType)3, 8562 },
	{ (Il2CppRGCTXDataType)3, 8571 },
	{ (Il2CppRGCTXDataType)2, 2217 },
	{ (Il2CppRGCTXDataType)3, 8568 },
	{ (Il2CppRGCTXDataType)3, 24370 },
	{ (Il2CppRGCTXDataType)2, 1350 },
	{ (Il2CppRGCTXDataType)3, 5543 },
	{ (Il2CppRGCTXDataType)1, 1868 },
	{ (Il2CppRGCTXDataType)2, 4060 },
	{ (Il2CppRGCTXDataType)3, 8567 },
	{ (Il2CppRGCTXDataType)1, 4060 },
	{ (Il2CppRGCTXDataType)1, 2217 },
	{ (Il2CppRGCTXDataType)2, 4142 },
	{ (Il2CppRGCTXDataType)2, 4060 },
	{ (Il2CppRGCTXDataType)2, 1949 },
	{ (Il2CppRGCTXDataType)2, 2092 },
	{ (Il2CppRGCTXDataType)3, 8565 },
	{ (Il2CppRGCTXDataType)3, 8572 },
	{ (Il2CppRGCTXDataType)3, 8573 },
	{ (Il2CppRGCTXDataType)3, 8569 },
	{ (Il2CppRGCTXDataType)3, 8576 },
	{ (Il2CppRGCTXDataType)2, 468 },
	{ (Il2CppRGCTXDataType)3, 5556 },
	{ (Il2CppRGCTXDataType)2, 633 },
	{ (Il2CppRGCTXDataType)2, 1775 },
	{ (Il2CppRGCTXDataType)2, 4064 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	334,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	73,
	s_rgctxIndices,
	337,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
