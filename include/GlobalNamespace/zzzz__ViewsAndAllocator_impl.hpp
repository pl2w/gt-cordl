#pragma once
// IWYU pragma private; include "GlobalNamespace/ViewsAndAllocator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ViewsAndAllocator_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ViewsAndAllocator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ViewsAndAllocator::*)()>(&::GlobalNamespace::ViewsAndAllocator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5643640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ViewsAndAllocator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*& GlobalNamespace::ViewsAndAllocator::__cordl_internal_get_views()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___views;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>* const& GlobalNamespace::ViewsAndAllocator::__cordl_internal_get_views() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___views;
}
constexpr void GlobalNamespace::ViewsAndAllocator::__cordl_internal_set_views(::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___views = value;
}
constexpr ::StringW& GlobalNamespace::ViewsAndAllocator::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& GlobalNamespace::ViewsAndAllocator::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void GlobalNamespace::ViewsAndAllocator::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr int32_t& GlobalNamespace::ViewsAndAllocator::__cordl_internal_get_order()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___order;
}
constexpr int32_t const& GlobalNamespace::ViewsAndAllocator::__cordl_internal_get_order() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___order;
}
constexpr void GlobalNamespace::ViewsAndAllocator::__cordl_internal_set_order(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___order = value;
}
constexpr bool& GlobalNamespace::ViewsAndAllocator::__cordl_internal_get_isStatic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr bool const& GlobalNamespace::ViewsAndAllocator::__cordl_internal_get_isStatic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr void GlobalNamespace::ViewsAndAllocator::__cordl_internal_set_isStatic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStatic = value;
}
inline void GlobalNamespace::ViewsAndAllocator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ViewsAndAllocator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ViewsAndAllocator* GlobalNamespace::ViewsAndAllocator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ViewsAndAllocator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ViewsAndAllocator::ViewsAndAllocator()   {
}
