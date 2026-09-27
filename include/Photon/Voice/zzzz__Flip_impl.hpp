#pragma once
// IWYU pragma private; include "Photon/Voice/Flip.hpp"
#include "Photon/Voice/zzzz__Flip_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Flip.get_IsVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Flip::*)()>(&::Photon::Voice::Flip::get_IsVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"get_IsVertical", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Flip.set_IsVertical
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Flip::*)(bool)>(&::Photon::Voice::Flip::set_IsVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"set_IsVertical", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Flip.get_IsHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Flip::*)()>(&::Photon::Voice::Flip::get_IsHorizontal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa753398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"get_IsHorizontal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Flip.set_IsHorizontal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::Flip::*)(bool)>(&::Photon::Voice::Flip::set_IsHorizontal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7533a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"set_IsHorizontal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Flip.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Voice::Flip, ::Photon::Voice::Flip)>(&::Photon::Voice::Flip::op_Equality)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa7533a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"op_Equality", {}, {::i2c::type_of<::Photon::Voice::Flip>(), ::i2c::type_of<::Photon::Voice::Flip>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Flip.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Voice::Flip, ::Photon::Voice::Flip)>(&::Photon::Voice::Flip::op_Inequality)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa753448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Photon::Voice::Flip>(), ::i2c::type_of<::Photon::Voice::Flip>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Flip.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Voice::Flip::*)(::System::Object*)>(&::Photon::Voice::Flip::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa7534e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Flip>(),
                    {::i2c::class_of<::Photon::Voice::Flip>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Flip.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::Flip::*)()>(&::Photon::Voice::Flip::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa753558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Flip>(),
                    {::i2c::class_of<::Photon::Voice::Flip>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::Flip.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::Flip (*)(::Photon::Voice::Flip, ::Photon::Voice::Flip)>(&::Photon::Voice::Flip::op_Multiply)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa7535bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Photon::Voice::Flip>(), ::i2c::type_of<::Photon::Voice::Flip>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::Flip::setStaticF_None(::Photon::Voice::Flip  value)  {
::cordl_internals::setStaticField<::Photon::Voice::Flip, "None", ::Photon::Voice::Flip>(std::forward<::Photon::Voice::Flip>(value));
}
inline ::Photon::Voice::Flip Photon::Voice::Flip::getStaticF_None()  {
return ::cordl_internals::getStaticField<::Photon::Voice::Flip, "None", ::Photon::Voice::Flip>();
}
inline void Photon::Voice::Flip::setStaticF_Vertical(::Photon::Voice::Flip  value)  {
::cordl_internals::setStaticField<::Photon::Voice::Flip, "Vertical", ::Photon::Voice::Flip>(std::forward<::Photon::Voice::Flip>(value));
}
inline ::Photon::Voice::Flip Photon::Voice::Flip::getStaticF_Vertical()  {
return ::cordl_internals::getStaticField<::Photon::Voice::Flip, "Vertical", ::Photon::Voice::Flip>();
}
inline void Photon::Voice::Flip::setStaticF_Horizontal(::Photon::Voice::Flip  value)  {
::cordl_internals::setStaticField<::Photon::Voice::Flip, "Horizontal", ::Photon::Voice::Flip>(std::forward<::Photon::Voice::Flip>(value));
}
inline ::Photon::Voice::Flip Photon::Voice::Flip::getStaticF_Horizontal()  {
return ::cordl_internals::getStaticField<::Photon::Voice::Flip, "Horizontal", ::Photon::Voice::Flip>();
}
inline void Photon::Voice::Flip::setStaticF_Both(::Photon::Voice::Flip  value)  {
::cordl_internals::setStaticField<::Photon::Voice::Flip, "Both", ::Photon::Voice::Flip>(std::forward<::Photon::Voice::Flip>(value));
}
inline ::Photon::Voice::Flip Photon::Voice::Flip::getStaticF_Both()  {
return ::cordl_internals::getStaticField<::Photon::Voice::Flip, "Both", ::Photon::Voice::Flip>();
}
inline bool Photon::Voice::Flip::get_IsVertical()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"get_IsVertical", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Photon::Voice::Flip::set_IsVertical(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"set_IsVertical", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Photon::Voice::Flip::get_IsHorizontal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"get_IsHorizontal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Photon::Voice::Flip::set_IsHorizontal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"set_IsHorizontal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Photon::Voice::Flip::op_Equality(::Photon::Voice::Flip  f1, ::Photon::Voice::Flip  f2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"op_Equality", {}, {::i2c::type_of<::Photon::Voice::Flip>(), ::i2c::type_of<::Photon::Voice::Flip>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, f1, f2);
}
inline bool Photon::Voice::Flip::op_Inequality(::Photon::Voice::Flip  f1, ::Photon::Voice::Flip  f2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Photon::Voice::Flip>(), ::i2c::type_of<::Photon::Voice::Flip>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, f1, f2);
}
inline bool Photon::Voice::Flip::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Flip>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Photon::Voice::Flip::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Flip>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Photon::Voice::Flip Photon::Voice::Flip::op_Multiply(::Photon::Voice::Flip  f1, ::Photon::Voice::Flip  f2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::Flip>(),
                        {"op_Multiply", {}, {::i2c::type_of<::Photon::Voice::Flip>(), ::i2c::type_of<::Photon::Voice::Flip>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::Flip>(nullptr, ___internal_method, f1, f2);
}
// Ctor Parameters [CppParam { name: "_IsVertical_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_IsHorizontal_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::Flip::Flip(bool  _IsVertical_k__BackingField, bool  _IsHorizontal_k__BackingField) noexcept  {
this->_IsVertical_k__BackingField = _IsVertical_k__BackingField;
this->_IsHorizontal_k__BackingField = _IsHorizontal_k__BackingField;
}
// Ctor Parameters []
constexpr ::Photon::Voice::Flip::Flip()   {
}
