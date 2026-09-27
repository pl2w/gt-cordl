#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonViewIDAllocator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonViewIDAllocator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonViewIDAllocator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonViewIDAllocator::*)()>(&::GlobalNamespace::PhotonViewIDAllocator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56435e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewIDAllocator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PhotonViewIDAllocator::__cordl_internal_get_isStatic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr bool const& GlobalNamespace::PhotonViewIDAllocator::__cordl_internal_get_isStatic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr void GlobalNamespace::PhotonViewIDAllocator::__cordl_internal_set_isStatic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStatic = value;
}
constexpr ::StringW& GlobalNamespace::PhotonViewIDAllocator::__cordl_internal_get_pathString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathString;
}
constexpr ::StringW const& GlobalNamespace::PhotonViewIDAllocator::__cordl_internal_get_pathString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathString;
}
constexpr void GlobalNamespace::PhotonViewIDAllocator::__cordl_internal_set_pathString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathString = value;
}
constexpr int32_t& GlobalNamespace::PhotonViewIDAllocator::__cordl_internal_get_order()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___order;
}
constexpr int32_t const& GlobalNamespace::PhotonViewIDAllocator::__cordl_internal_get_order() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___order;
}
constexpr void GlobalNamespace::PhotonViewIDAllocator::__cordl_internal_set_order(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___order = value;
}
inline void GlobalNamespace::PhotonViewIDAllocator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonViewIDAllocator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotonViewIDAllocator* GlobalNamespace::PhotonViewIDAllocator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonViewIDAllocator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonViewIDAllocator::PhotonViewIDAllocator()   {
}
