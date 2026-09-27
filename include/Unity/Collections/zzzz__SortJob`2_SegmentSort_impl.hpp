#pragma once
// IWYU pragma private; include "Unity/Collections/SortJob`2_SegmentSort.hpp"
#include "Unity/Collections/zzzz__SortJob`2_SegmentSort_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
template<typename T,typename U>
inline void GlobalNamespace::SortJob_2_SegmentSort<T,U>::Execute(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortJob_2_SegmentSort<T,U>>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
template<typename T,typename U>
constexpr  GlobalNamespace::SortJob_2_SegmentSort<T,U>::operator ::Unity::Jobs::IJobParallelFor*()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
template<typename T,typename U>
constexpr ::Unity::Jobs::IJobParallelFor* GlobalNamespace::SortJob_2_SegmentSort<T,U>::i___Unity__Jobs__IJobParallelFor()  {
return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SegmentWidth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T,typename U>
constexpr ::GlobalNamespace::SortJob_2_SegmentSort<T,U>::SortJob_2_SegmentSort(T*  Data, U  Comp, int32_t  Length, int32_t  SegmentWidth) noexcept  {
this->Data = Data;
this->Comp = Comp;
this->Length = Length;
this->SegmentWidth = SegmentWidth;
}
// Ctor Parameters []
template<typename T,typename U>
constexpr ::GlobalNamespace::SortJob_2_SegmentSort<T,U>::SortJob_2_SegmentSort()   {
}
