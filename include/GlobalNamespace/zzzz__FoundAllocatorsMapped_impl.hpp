#pragma once
// IWYU pragma private; include "GlobalNamespace/FoundAllocatorsMapped.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FoundAllocatorsMapped_def.hpp"
#include "GlobalNamespace/zzzz__ViewsAndAllocator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FoundAllocatorsMapped._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FoundAllocatorsMapped::*)()>(&::GlobalNamespace::FoundAllocatorsMapped::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5643648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FoundAllocatorsMapped*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FoundAllocatorsMapped::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& GlobalNamespace::FoundAllocatorsMapped::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void GlobalNamespace::FoundAllocatorsMapped::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ViewsAndAllocator*>*& GlobalNamespace::FoundAllocatorsMapped::__cordl_internal_get_allocators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocators;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ViewsAndAllocator*>* const& GlobalNamespace::FoundAllocatorsMapped::__cordl_internal_get_allocators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allocators;
}
constexpr void GlobalNamespace::FoundAllocatorsMapped::__cordl_internal_set_allocators(::System::Collections::Generic::List_1<::GlobalNamespace::ViewsAndAllocator*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allocators = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FoundAllocatorsMapped*>*& GlobalNamespace::FoundAllocatorsMapped::__cordl_internal_get_subGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subGroups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FoundAllocatorsMapped*>* const& GlobalNamespace::FoundAllocatorsMapped::__cordl_internal_get_subGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subGroups;
}
constexpr void GlobalNamespace::FoundAllocatorsMapped::__cordl_internal_set_subGroups(::System::Collections::Generic::List_1<::GlobalNamespace::FoundAllocatorsMapped*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subGroups = value;
}
inline void GlobalNamespace::FoundAllocatorsMapped::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FoundAllocatorsMapped*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FoundAllocatorsMapped* GlobalNamespace::FoundAllocatorsMapped::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FoundAllocatorsMapped*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FoundAllocatorsMapped::FoundAllocatorsMapped()   {
}
