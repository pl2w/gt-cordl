#pragma once
// IWYU pragma private; include "Fusion/NetworkButtons.hpp"
#include "Fusion/zzzz__NetworkButtons_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkButtons.get_Bits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkButtons::*)()>(&::Fusion::NetworkButtons::get_Bits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"get_Bits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkButtons::*)(int32_t)>(&::Fusion::NetworkButtons::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.IsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkButtons::*)(int32_t)>(&::Fusion::NetworkButtons::IsSet)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fa0a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.SetDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkButtons::*)(int32_t)>(&::Fusion::NetworkButtons::SetDown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fa0a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"SetDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.SetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkButtons::*)(int32_t)>(&::Fusion::NetworkButtons::SetUp)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fa0a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"SetUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.Set
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkButtons::*)(int32_t, bool)>(&::Fusion::NetworkButtons::Set)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fa0ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.SetAllUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkButtons::*)()>(&::Fusion::NetworkButtons::SetAllUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"SetAllUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.SetAllDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkButtons::*)()>(&::Fusion::NetworkButtons::SetAllDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa0b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"SetAllDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.GetPressedOrReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::Fusion::NetworkButtons,::Fusion::NetworkButtons> (::Fusion::NetworkButtons::*)(::Fusion::NetworkButtons)>(&::Fusion::NetworkButtons::GetPressedOrReleased)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5fa0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"GetPressedOrReleased", {}, {::i2c::type_of<::Fusion::NetworkButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.GetPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkButtons (::Fusion::NetworkButtons::*)(::Fusion::NetworkButtons)>(&::Fusion::NetworkButtons::GetPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa0bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"GetPressed", {}, {::i2c::type_of<::Fusion::NetworkButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.GetReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkButtons (::Fusion::NetworkButtons::*)(::Fusion::NetworkButtons)>(&::Fusion::NetworkButtons::GetReleased)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa0bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"GetReleased", {}, {::i2c::type_of<::Fusion::NetworkButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.WasPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkButtons::*)(::Fusion::NetworkButtons, int32_t)>(&::Fusion::NetworkButtons::WasPressed)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fa0bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"WasPressed", {}, {::i2c::type_of<::Fusion::NetworkButtons>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.WasReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkButtons::*)(::Fusion::NetworkButtons, int32_t)>(&::Fusion::NetworkButtons::WasReleased)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5fa0c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"WasReleased", {}, {::i2c::type_of<::Fusion::NetworkButtons>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkButtons::*)(::Fusion::NetworkButtons)>(&::Fusion::NetworkButtons::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa0c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkButtons>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkButtons::*)(::System::Object*)>(&::Fusion::NetworkButtons::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa0c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkButtons>(),
                    {::i2c::class_of<::Fusion::NetworkButtons>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkButtons.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkButtons::*)()>(&::Fusion::NetworkButtons::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa0ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkButtons>(),
                    {::i2c::class_of<::Fusion::NetworkButtons>(), 2}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkButtons::__cordl_internal_get__bits()  {
return this->____bits;
}
constexpr int32_t const& Fusion::NetworkButtons::__cordl_internal_get__bits() const {
return this->____bits;
}
constexpr void Fusion::NetworkButtons::__cordl_internal_set__bits(int32_t  value)  {
this->____bits = value;
}
inline int32_t Fusion::NetworkButtons::get_Bits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"get_Bits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Fusion::NetworkButtons::_ctor(int32_t  buttons)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buttons);
}
inline bool Fusion::NetworkButtons::IsSet(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"IsSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, button);
}
inline void Fusion::NetworkButtons::SetDown(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"SetDown", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, button);
}
inline void Fusion::NetworkButtons::SetUp(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"SetUp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, button);
}
inline void Fusion::NetworkButtons::Set(int32_t  button, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"Set", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, button, state);
}
inline void Fusion::NetworkButtons::SetAllUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"SetAllUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Fusion::NetworkButtons::SetAllDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"SetAllDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Fusion::NetworkButtons::IsSet(T  button)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkButtons>(),
                    {"IsSet", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, button);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::NetworkButtons::SetDown(T  button)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkButtons>(),
                    {"SetDown", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, button);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::NetworkButtons::SetUp(T  button)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkButtons>(),
                    {"SetUp", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, button);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::NetworkButtons::Set(T  button, bool  state)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkButtons>(),
                    {"Set", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, button, state);
}
inline ::System::ValueTuple_2<::Fusion::NetworkButtons,::Fusion::NetworkButtons> Fusion::NetworkButtons::GetPressedOrReleased(::Fusion::NetworkButtons  previous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"GetPressedOrReleased", {}, {::i2c::type_of<::Fusion::NetworkButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Fusion::NetworkButtons,::Fusion::NetworkButtons>>(*this, ___internal_method, previous);
}
inline ::Fusion::NetworkButtons Fusion::NetworkButtons::GetPressed(::Fusion::NetworkButtons  previous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"GetPressed", {}, {::i2c::type_of<::Fusion::NetworkButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkButtons>(*this, ___internal_method, previous);
}
inline ::Fusion::NetworkButtons Fusion::NetworkButtons::GetReleased(::Fusion::NetworkButtons  previous)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"GetReleased", {}, {::i2c::type_of<::Fusion::NetworkButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkButtons>(*this, ___internal_method, previous);
}
inline bool Fusion::NetworkButtons::WasPressed(::Fusion::NetworkButtons  previous, int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"WasPressed", {}, {::i2c::type_of<::Fusion::NetworkButtons>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, previous, button);
}
inline bool Fusion::NetworkButtons::WasReleased(::Fusion::NetworkButtons  previous, int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"WasReleased", {}, {::i2c::type_of<::Fusion::NetworkButtons>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, previous, button);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Fusion::NetworkButtons::WasPressed(::Fusion::NetworkButtons  previous, T  button)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkButtons>(),
                    {"WasPressed", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkButtons>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, previous, button);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool Fusion::NetworkButtons::WasReleased(::Fusion::NetworkButtons  previous, T  button)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkButtons>(),
                    {"WasReleased", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkButtons>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, previous, button);
}
inline bool Fusion::NetworkButtons::Equals(::Fusion::NetworkButtons  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkButtons>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkButtons>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkButtons::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkButtons>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkButtons::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkButtons>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkButtons::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkButtons::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkButtons>"
constexpr  Fusion::NetworkButtons::operator ::System::IEquatable_1<::Fusion::NetworkButtons>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkButtons>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkButtons>"
constexpr ::System::IEquatable_1<::Fusion::NetworkButtons>* Fusion::NetworkButtons::i___System__IEquatable_1___Fusion__NetworkButtons_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkButtons>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_bits", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkButtons::NetworkButtons(int32_t  _bits) noexcept  {
this->_bits = _bits;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkButtons::NetworkButtons()   {
}
