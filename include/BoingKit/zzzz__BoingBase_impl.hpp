#pragma once
// IWYU pragma private; include "BoingKit/BoingBase.hpp"
#include "BoingKit/zzzz__Version_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BoingKit/zzzz__BoingBase_def.hpp"
#include "BoingKit/zzzz__Version_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingBase.get_CurrentVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BoingKit::Version (::BoingKit::BoingBase::*)()>(&::BoingKit::BoingBase::get_CurrentVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e114bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBase*>(),
                        {"get_CurrentVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBase.get_PreviousVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BoingKit::Version (::BoingKit::BoingBase::*)()>(&::BoingKit::BoingBase::get_PreviousVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e114cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBase*>(),
                        {"get_PreviousVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBase.get_InitialVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BoingKit::Version (::BoingKit::BoingBase::*)()>(&::BoingKit::BoingBase::get_InitialVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e114dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBase*>(),
                        {"get_InitialVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBase.OnUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBase::*)(::BoingKit::Version, ::BoingKit::Version)>(&::BoingKit::BoingBase::OnUpgrade)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e114ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::BoingKit::BoingBase*>(),
                    {::i2c::class_of<::BoingKit::BoingBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingBase::*)()>(&::BoingKit::BoingBase::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e115b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::BoingKit::Version& BoingKit::BoingBase::__cordl_internal_get_m_currentVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currentVersion;
}
constexpr ::BoingKit::Version const& BoingKit::BoingBase::__cordl_internal_get_m_currentVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_currentVersion;
}
constexpr void BoingKit::BoingBase::__cordl_internal_set_m_currentVersion(::BoingKit::Version  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_currentVersion = value;
}
constexpr ::BoingKit::Version& BoingKit::BoingBase::__cordl_internal_get_m_previousVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_previousVersion;
}
constexpr ::BoingKit::Version const& BoingKit::BoingBase::__cordl_internal_get_m_previousVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_previousVersion;
}
constexpr void BoingKit::BoingBase::__cordl_internal_set_m_previousVersion(::BoingKit::Version  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_previousVersion = value;
}
constexpr ::BoingKit::Version& BoingKit::BoingBase::__cordl_internal_get_m_initialVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_initialVersion;
}
constexpr ::BoingKit::Version const& BoingKit::BoingBase::__cordl_internal_get_m_initialVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_initialVersion;
}
constexpr void BoingKit::BoingBase::__cordl_internal_set_m_initialVersion(::BoingKit::Version  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_initialVersion = value;
}
inline ::BoingKit::Version BoingKit::BoingBase::get_CurrentVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBase*>(),
                        {"get_CurrentVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::BoingKit::Version>(this, ___internal_method);
}
inline ::BoingKit::Version BoingKit::BoingBase::get_PreviousVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBase*>(),
                        {"get_PreviousVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::BoingKit::Version>(this, ___internal_method);
}
inline ::BoingKit::Version BoingKit::BoingBase::get_InitialVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBase*>(),
                        {"get_InitialVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::BoingKit::Version>(this, ___internal_method);
}
inline void BoingKit::BoingBase::OnUpgrade(::BoingKit::Version  oldVersion, ::BoingKit::Version  newVersion)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::BoingKit::BoingBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldVersion, newVersion);
}
inline void BoingKit::BoingBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingBase* BoingKit::BoingBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingBase*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingBase::BoingBase()   {
}
