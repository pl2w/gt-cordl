#pragma once
// IWYU pragma private; include "Unity/Collections/SortJob`2_SegmentSortMerge.hpp"
#include "Unity/Collections/zzzz__SortJob`2_SegmentSortMerge_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
template<typename T,typename U>
inline void GlobalNamespace::SortJob_2_SegmentSortMerge<T,U>::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SortJob_2_SegmentSortMerge<T,U>>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
template<typename T,typename U>
constexpr  GlobalNamespace::SortJob_2_SegmentSortMerge<T,U>::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
template<typename T,typename U>
constexpr ::Unity::Jobs::IJob* GlobalNamespace::SortJob_2_SegmentSortMerge<T,U>::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Data", ty: "T*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Comp", ty: "U", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SegmentWidth", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T,typename U>
constexpr ::GlobalNamespace::SortJob_2_SegmentSortMerge<T,U>::SortJob_2_SegmentSortMerge(T*  Data, U  Comp, int32_t  Length, int32_t  SegmentWidth) noexcept  {
this->Data = Data;
this->Comp = Comp;
this->Length = Length;
this->SegmentWidth = SegmentWidth;
}
// Ctor Parameters []
template<typename T,typename U>
constexpr ::GlobalNamespace::SortJob_2_SegmentSortMerge<T,U>::SortJob_2_SegmentSortMerge()   {
}
