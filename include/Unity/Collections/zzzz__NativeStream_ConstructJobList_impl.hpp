#pragma once
// IWYU pragma private; include "Unity/Collections/NativeStream_ConstructJobList.hpp"
#include "Unity/Collections/zzzz__NativeStream_impl.hpp"
#include "Unity/Collections/zzzz__NativeStream_ConstructJobList_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UntypedUnsafeList_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeStream_ConstructJobList.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeStream_ConstructJobList::*)()>(&::GlobalNamespace::NativeStream_ConstructJobList::Execute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaf06ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeStream_ConstructJobList>(),
                        {"Execute", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NativeStream_ConstructJobList::Execute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeStream_ConstructJobList>(),
                        {"Execute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr  GlobalNamespace::NativeStream_ConstructJobList::operator ::Unity::Jobs::IJob*()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* GlobalNamespace::NativeStream_ConstructJobList::i___Unity__Jobs__IJob()  {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::NativeStream", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "List", ty: "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeStream_ConstructJobList::NativeStream_ConstructJobList(::Unity::Collections::NativeStream  Container, ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*  List) noexcept  {
this->Container = Container;
this->List = List;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeStream_ConstructJobList::NativeStream_ConstructJobList()   {
}
