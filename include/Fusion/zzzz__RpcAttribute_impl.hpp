#pragma once
// IWYU pragma private; include "Fusion/RpcAttribute.hpp"
#include "Fusion/zzzz__RpcChannel_impl.hpp"
#include "Fusion/zzzz__RpcHostMode_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__RpcAttribute_def.hpp"
#include "Fusion/zzzz__RpcChannel_def.hpp"
#include "Fusion/zzzz__RpcHostMode_def.hpp"
#include "Fusion/zzzz__RpcSources_def.hpp"
#include "Fusion/zzzz__RpcTargets_def.hpp"
//  Writing Method size for method: ::Fusion::RpcAttribute.get_Sources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::RpcAttribute::*)()>(&::Fusion::RpcAttribute::get_Sources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd08bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_Sources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute.get_Targets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::RpcAttribute::*)()>(&::Fusion::RpcAttribute::get_Targets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd08c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_Targets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute.get_InvokeLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::RpcAttribute::*)()>(&::Fusion::RpcAttribute::get_InvokeLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd08cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_InvokeLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute.set_InvokeLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcAttribute::*)(bool)>(&::Fusion::RpcAttribute::set_InvokeLocal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd08d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"set_InvokeLocal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute.get_Channel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcChannel (::Fusion::RpcAttribute::*)()>(&::Fusion::RpcAttribute::get_Channel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd08dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_Channel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute.set_Channel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcAttribute::*)(::Fusion::RpcChannel)>(&::Fusion::RpcAttribute::set_Channel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd08e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"set_Channel", {}, {::i2c::type_of<::Fusion::RpcChannel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute.get_TickAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::RpcAttribute::*)()>(&::Fusion::RpcAttribute::get_TickAligned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd08ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_TickAligned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute.set_TickAligned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcAttribute::*)(bool)>(&::Fusion::RpcAttribute::set_TickAligned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd08f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"set_TickAligned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute.get_HostMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RpcHostMode (::Fusion::RpcAttribute::*)()>(&::Fusion::RpcAttribute::get_HostMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd08fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_HostMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute.set_HostMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcAttribute::*)(::Fusion::RpcHostMode)>(&::Fusion::RpcAttribute::set_HostMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd0904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"set_HostMode", {}, {::i2c::type_of<::Fusion::RpcHostMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcAttribute::*)()>(&::Fusion::RpcAttribute::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fd090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RpcAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RpcAttribute::*)(::Fusion::RpcSources, ::Fusion::RpcTargets)>(&::Fusion::RpcAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fd0928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::RpcSources>(), ::i2c::type_of<::Fusion::RpcTargets>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::RpcAttribute::__cordl_internal_get__Sources_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sources_k__BackingField;
}
constexpr int32_t const& Fusion::RpcAttribute::__cordl_internal_get__Sources_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Sources_k__BackingField;
}
constexpr void Fusion::RpcAttribute::__cordl_internal_set__Sources_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Sources_k__BackingField = value;
}
constexpr int32_t& Fusion::RpcAttribute::__cordl_internal_get__Targets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Targets_k__BackingField;
}
constexpr int32_t const& Fusion::RpcAttribute::__cordl_internal_get__Targets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Targets_k__BackingField;
}
constexpr void Fusion::RpcAttribute::__cordl_internal_set__Targets_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Targets_k__BackingField = value;
}
constexpr bool& Fusion::RpcAttribute::__cordl_internal_get__InvokeLocal_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InvokeLocal_k__BackingField;
}
constexpr bool const& Fusion::RpcAttribute::__cordl_internal_get__InvokeLocal_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InvokeLocal_k__BackingField;
}
constexpr void Fusion::RpcAttribute::__cordl_internal_set__InvokeLocal_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InvokeLocal_k__BackingField = value;
}
constexpr ::Fusion::RpcChannel& Fusion::RpcAttribute::__cordl_internal_get__Channel_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channel_k__BackingField;
}
constexpr ::Fusion::RpcChannel const& Fusion::RpcAttribute::__cordl_internal_get__Channel_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Channel_k__BackingField;
}
constexpr void Fusion::RpcAttribute::__cordl_internal_set__Channel_k__BackingField(::Fusion::RpcChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Channel_k__BackingField = value;
}
constexpr bool& Fusion::RpcAttribute::__cordl_internal_get__TickAligned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickAligned_k__BackingField;
}
constexpr bool const& Fusion::RpcAttribute::__cordl_internal_get__TickAligned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickAligned_k__BackingField;
}
constexpr void Fusion::RpcAttribute::__cordl_internal_set__TickAligned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickAligned_k__BackingField = value;
}
constexpr ::Fusion::RpcHostMode& Fusion::RpcAttribute::__cordl_internal_get__HostMode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HostMode_k__BackingField;
}
constexpr ::Fusion::RpcHostMode const& Fusion::RpcAttribute::__cordl_internal_get__HostMode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HostMode_k__BackingField;
}
constexpr void Fusion::RpcAttribute::__cordl_internal_set__HostMode_k__BackingField(::Fusion::RpcHostMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HostMode_k__BackingField = value;
}
inline int32_t Fusion::RpcAttribute::get_Sources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_Sources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t Fusion::RpcAttribute::get_Targets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_Targets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Fusion::RpcAttribute::get_InvokeLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_InvokeLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::RpcAttribute::set_InvokeLocal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"set_InvokeLocal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::RpcChannel Fusion::RpcAttribute::get_Channel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_Channel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcChannel>(this, ___internal_method);
}
inline void Fusion::RpcAttribute::set_Channel(::Fusion::RpcChannel  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"set_Channel", {}, {::i2c::type_of<::Fusion::RpcChannel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::RpcAttribute::get_TickAligned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_TickAligned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::RpcAttribute::set_TickAligned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"set_TickAligned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::RpcHostMode Fusion::RpcAttribute::get_HostMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"get_HostMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RpcHostMode>(this, ___internal_method);
}
inline void Fusion::RpcAttribute::set_HostMode(::Fusion::RpcHostMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {"set_HostMode", {}, {::i2c::type_of<::Fusion::RpcHostMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::RpcAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RpcAttribute::_ctor(::Fusion::RpcSources  sources, ::Fusion::RpcTargets  targets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RpcAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::RpcSources>(), ::i2c::type_of<::Fusion::RpcTargets>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sources, targets);
}
inline ::Fusion::RpcAttribute* Fusion::RpcAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RpcAttribute*>());
}
inline ::Fusion::RpcAttribute* Fusion::RpcAttribute::New_ctor(::Fusion::RpcSources  sources, ::Fusion::RpcTargets  targets)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RpcAttribute*>(sources, targets));
}
// Ctor Parameters []
constexpr ::Fusion::RpcAttribute::RpcAttribute()   {
}
