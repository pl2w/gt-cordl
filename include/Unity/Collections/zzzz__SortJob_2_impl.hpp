#pragma once
// IWYU pragma private; include "Unity/Collections/SortJob_2.hpp"
#include "Unity/Collections/zzzz__SortJob_2_def.hpp"
#include "Unity/Collections/zzzz__SortJob`2_SegmentSortMerge_def.hpp"
#include "Unity/Collections/zzzz__SortJob`2_SegmentSort_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template<typename T,typename U>
inline ::Unity::Jobs::JobHandle Unity::Collections::SortJob_2<T,U>::Schedule(::Unity::Jobs::JobHandle  inputDeps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Collections::SortJob_2<T,U>>(),
                        {"Schedule", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
// Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T,typename U>
constexpr ::Unity::Collections::SortJob_2<T,U>::SortJob_2(T*  Data, U  Comp, int32_t  Length) noexcept  {
this->Data = Data;
this->Comp = Comp;
this->Length = Length;
}
// Ctor Parameters []
template<typename T,typename U>
constexpr ::Unity::Collections::SortJob_2<T,U>::SortJob_2()   {
}
