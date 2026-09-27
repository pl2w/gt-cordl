#pragma once
// IWYU pragma private; include "Oculus/Interaction/UpdateDriverAfterDataSource.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__UpdateDriverAfterDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "Oculus/Interaction/zzzz__IUpdateDriver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)()>(&::Oculus::Interaction::UpdateDriverAfterDataSource::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa444234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)()>(&::Oculus::Interaction::UpdateDriverAfterDataSource::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4442e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)()>(&::Oculus::Interaction::UpdateDriverAfterDataSource::OnEnable)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa444314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)()>(&::Oculus::Interaction::UpdateDriverAfterDataSource::OnDisable)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa444480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                    {::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.get_IsRootDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::UpdateDriverAfterDataSource::*)()>(&::Oculus::Interaction::UpdateDriverAfterDataSource::get_IsRootDriver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4445ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"get_IsRootDriver", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.set_IsRootDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)(bool)>(&::Oculus::Interaction::UpdateDriverAfterDataSource::set_IsRootDriver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4445f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"set_IsRootDriver", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.Drive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)()>(&::Oculus::Interaction::UpdateDriverAfterDataSource::Drive)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa4445fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"Drive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.InjectAllUpdateDriverAfterDataSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)(::Oculus::Interaction::IUpdateDriver*, ::Oculus::Interaction::Input::IDataSource*)>(&::Oculus::Interaction::UpdateDriverAfterDataSource::InjectAllUpdateDriverAfterDataSource)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4446a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"InjectAllUpdateDriverAfterDataSource", {}, {::i2c::type_of<::Oculus::Interaction::IUpdateDriver*>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.InjectUpdateDriver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)(::Oculus::Interaction::IUpdateDriver*)>(&::Oculus::Interaction::UpdateDriverAfterDataSource::InjectUpdateDriver)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa4446c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"InjectUpdateDriver", {}, {::i2c::type_of<::Oculus::Interaction::IUpdateDriver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource.InjectDataSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)(::Oculus::Interaction::Input::IDataSource*)>(&::Oculus::Interaction::UpdateDriverAfterDataSource::InjectDataSource)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa444794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"InjectDataSource", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UpdateDriverAfterDataSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UpdateDriverAfterDataSource::*)()>(&::Oculus::Interaction::UpdateDriverAfterDataSource::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa444860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get__updateDriver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateDriver;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get__updateDriver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateDriver;
}
constexpr void Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_set__updateDriver(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateDriver = value;
}
constexpr ::Oculus::Interaction::IUpdateDriver*& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get_UpdateDriver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateDriver;
}
constexpr ::Oculus::Interaction::IUpdateDriver* const& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get_UpdateDriver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateDriver;
}
constexpr void Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_set_UpdateDriver(::Oculus::Interaction::IUpdateDriver*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateDriver = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get__dataSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSource;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get__dataSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSource;
}
constexpr void Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_set__dataSource(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataSource = value;
}
constexpr ::Oculus::Interaction::Input::IDataSource*& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get_DataSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataSource;
}
constexpr ::Oculus::Interaction::Input::IDataSource* const& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get_DataSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DataSource;
}
constexpr void Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_set_DataSource(::Oculus::Interaction::Input::IDataSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DataSource = value;
}
constexpr bool& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr bool& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get__IsRootDriver_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRootDriver_k__BackingField;
}
constexpr bool const& Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_get__IsRootDriver_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRootDriver_k__BackingField;
}
constexpr void Oculus::Interaction::UpdateDriverAfterDataSource::__cordl_internal_set__IsRootDriver_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRootDriver_k__BackingField = value;
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::UpdateDriverAfterDataSource::get_IsRootDriver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"get_IsRootDriver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::set_IsRootDriver(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"set_IsRootDriver", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::Drive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"Drive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::InjectAllUpdateDriverAfterDataSource(::Oculus::Interaction::IUpdateDriver*  updateDriver, ::Oculus::Interaction::Input::IDataSource*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"InjectAllUpdateDriverAfterDataSource", {}, {::i2c::type_of<::Oculus::Interaction::IUpdateDriver*>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateDriver, dataSource);
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::InjectUpdateDriver(::Oculus::Interaction::IUpdateDriver*  updateDriver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"InjectUpdateDriver", {}, {::i2c::type_of<::Oculus::Interaction::IUpdateDriver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateDriver);
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::InjectDataSource(::Oculus::Interaction::Input::IDataSource*  dataSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {"InjectDataSource", {}, {::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataSource);
}
inline void Oculus::Interaction::UpdateDriverAfterDataSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UpdateDriverAfterDataSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UpdateDriverAfterDataSource* Oculus::Interaction::UpdateDriverAfterDataSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UpdateDriverAfterDataSource*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IUpdateDriver"
constexpr  Oculus::Interaction::UpdateDriverAfterDataSource::operator ::Oculus::Interaction::IUpdateDriver*() noexcept {
return static_cast<::Oculus::Interaction::IUpdateDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IUpdateDriver"
constexpr ::Oculus::Interaction::IUpdateDriver* Oculus::Interaction::UpdateDriverAfterDataSource::i___Oculus__Interaction__IUpdateDriver() noexcept {
return static_cast<::Oculus::Interaction::IUpdateDriver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UpdateDriverAfterDataSource::UpdateDriverAfterDataSource()   {
}
