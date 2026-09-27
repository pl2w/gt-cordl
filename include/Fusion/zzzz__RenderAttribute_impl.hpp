#pragma once
// IWYU pragma private; include "Fusion/RenderAttribute.hpp"
#include "Fusion/zzzz__RenderSource_impl.hpp"
#include "Fusion/zzzz__RenderTimeframe_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Fusion/zzzz__RenderAttribute_def.hpp"
#include "Fusion/zzzz__RenderSource_def.hpp"
#include "Fusion/zzzz__RenderTimeframe_def.hpp"
//  Writing Method size for method: ::Fusion::RenderAttribute.get_Timeframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RenderTimeframe (::Fusion::RenderAttribute::*)()>(&::Fusion::RenderAttribute::get_Timeframe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"get_Timeframe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RenderAttribute.set_Timeframe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RenderAttribute::*)(::Fusion::RenderTimeframe)>(&::Fusion::RenderAttribute::set_Timeframe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"set_Timeframe", {}, {::i2c::type_of<::Fusion::RenderTimeframe>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RenderAttribute.get_Source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::RenderSource (::Fusion::RenderAttribute::*)()>(&::Fusion::RenderAttribute::get_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"get_Source", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RenderAttribute.set_Source
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RenderAttribute::*)(::Fusion::RenderSource)>(&::Fusion::RenderAttribute::set_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f70398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"set_Source", {}, {::i2c::type_of<::Fusion::RenderSource>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RenderAttribute.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::RenderAttribute::*)()>(&::Fusion::RenderAttribute::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f703a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"get_Method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RenderAttribute.set_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RenderAttribute::*)(::StringW)>(&::Fusion::RenderAttribute::set_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f703a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"set_Method", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RenderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RenderAttribute::*)()>(&::Fusion::RenderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f703b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::RenderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::RenderAttribute::*)(::Fusion::RenderTimeframe, ::Fusion::RenderSource)>(&::Fusion::RenderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f703b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::RenderTimeframe>(), ::i2c::type_of<::Fusion::RenderSource>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::RenderTimeframe& Fusion::RenderAttribute::__cordl_internal_get__Timeframe_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timeframe_k__BackingField;
}
constexpr ::Fusion::RenderTimeframe const& Fusion::RenderAttribute::__cordl_internal_get__Timeframe_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Timeframe_k__BackingField;
}
constexpr void Fusion::RenderAttribute::__cordl_internal_set__Timeframe_k__BackingField(::Fusion::RenderTimeframe  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Timeframe_k__BackingField = value;
}
constexpr ::Fusion::RenderSource& Fusion::RenderAttribute::__cordl_internal_get__Source_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source_k__BackingField;
}
constexpr ::Fusion::RenderSource const& Fusion::RenderAttribute::__cordl_internal_get__Source_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Source_k__BackingField;
}
constexpr void Fusion::RenderAttribute::__cordl_internal_set__Source_k__BackingField(::Fusion::RenderSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Source_k__BackingField = value;
}
constexpr ::StringW& Fusion::RenderAttribute::__cordl_internal_get__Method_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr ::StringW const& Fusion::RenderAttribute::__cordl_internal_get__Method_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr void Fusion::RenderAttribute::__cordl_internal_set__Method_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Method_k__BackingField = value;
}
inline ::Fusion::RenderTimeframe Fusion::RenderAttribute::get_Timeframe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"get_Timeframe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RenderTimeframe>(this, ___internal_method);
}
inline void Fusion::RenderAttribute::set_Timeframe(::Fusion::RenderTimeframe  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"set_Timeframe", {}, {::i2c::type_of<::Fusion::RenderTimeframe>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Fusion::RenderSource Fusion::RenderAttribute::get_Source()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"get_Source", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::RenderSource>(this, ___internal_method);
}
inline void Fusion::RenderAttribute::set_Source(::Fusion::RenderSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"set_Source", {}, {::i2c::type_of<::Fusion::RenderSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::RenderAttribute::get_Method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"get_Method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::RenderAttribute::set_Method(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {"set_Method", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::RenderAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::RenderAttribute::_ctor(::Fusion::RenderTimeframe  timeframe, ::Fusion::RenderSource  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RenderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::RenderTimeframe>(), ::i2c::type_of<::Fusion::RenderSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeframe, source);
}
inline ::Fusion::RenderAttribute* Fusion::RenderAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RenderAttribute*>());
}
inline ::Fusion::RenderAttribute* Fusion::RenderAttribute::New_ctor(::Fusion::RenderTimeframe  timeframe, ::Fusion::RenderSource  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RenderAttribute*>(timeframe, source));
}
// Ctor Parameters []
constexpr ::Fusion::RenderAttribute::RenderAttribute()   {
}
