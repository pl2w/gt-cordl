#pragma once
// IWYU pragma private; include "Unity/IntegerTime/RationalTime_TicksPerSecond.hpp"
#include "Unity/IntegerTime/zzzz__RationalTime_TicksPerSecond_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RationalTime_TicksPerSecond._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RationalTime_TicksPerSecond::*)(uint32_t, uint32_t)>(&::GlobalNamespace::RationalTime_TicksPerSecond::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb55c7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RationalTime_TicksPerSecond.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RationalTime_TicksPerSecond::*)(::GlobalNamespace::RationalTime_TicksPerSecond)>(&::GlobalNamespace::RationalTime_TicksPerSecond::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb55c900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::RationalTime_TicksPerSecond>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RationalTime_TicksPerSecond.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RationalTime_TicksPerSecond::*)(::System::Object*)>(&::GlobalNamespace::RationalTime_TicksPerSecond::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb55c928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                    {::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RationalTime_TicksPerSecond.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RationalTime_TicksPerSecond::*)()>(&::GlobalNamespace::RationalTime_TicksPerSecond::GetHashCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb55c9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                    {::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RationalTime_TicksPerSecond.Simplify
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::by_ref<uint32_t>)>(&::GlobalNamespace::RationalTime_TicksPerSecond::Simplify)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb55c858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                        {"Simplify", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RationalTime_TicksPerSecond.Gcd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, uint32_t)>(&::GlobalNamespace::RationalTime_TicksPerSecond::Gcd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb55ca38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                        {"Gcd", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_DefaultTicksPerSecond(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "DefaultTicksPerSecond", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_DefaultTicksPerSecond()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "DefaultTicksPerSecond", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond24(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond24", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond24()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond24", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond25(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond25", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond25()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond25", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond30(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond30", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond30()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond30", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond50(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond50", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond50()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond50", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond60(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond60", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond60()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond60", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond120(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond120", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond120()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond120", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond2397(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond2397", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond2397()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond2397", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond2425(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond2425", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond2425()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond2425", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond2997(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond2997", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond2997()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond2997", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond5994(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond5994", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond5994()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond5994", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_TicksPerSecond11988(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond11988", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_TicksPerSecond11988()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "TicksPerSecond11988", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::setStaticF_DiscreteTimeRate(::GlobalNamespace::RationalTime_TicksPerSecond  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "DiscreteTimeRate", ::GlobalNamespace::RationalTime_TicksPerSecond>(std::forward<::GlobalNamespace::RationalTime_TicksPerSecond>(value));
}
inline ::GlobalNamespace::RationalTime_TicksPerSecond GlobalNamespace::RationalTime_TicksPerSecond::getStaticF_DiscreteTimeRate()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RationalTime_TicksPerSecond, "DiscreteTimeRate", ::GlobalNamespace::RationalTime_TicksPerSecond>();
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::_ctor(uint32_t  num, uint32_t  den)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, num, den);
}
inline bool GlobalNamespace::RationalTime_TicksPerSecond::Equals(::GlobalNamespace::RationalTime_TicksPerSecond  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::RationalTime_TicksPerSecond>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline bool GlobalNamespace::RationalTime_TicksPerSecond::Equals(::System::Object*  rhs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, rhs);
}
inline int32_t GlobalNamespace::RationalTime_TicksPerSecond::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::RationalTime_TicksPerSecond::Simplify(::by_ref<uint32_t>  num, ::by_ref<uint32_t>  den)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                        {"Simplify", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, num, den);
}
inline uint32_t GlobalNamespace::RationalTime_TicksPerSecond::Gcd(uint32_t  a, uint32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RationalTime_TicksPerSecond>(),
                        {"Gcd", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>"
constexpr  GlobalNamespace::RationalTime_TicksPerSecond::operator ::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>"
constexpr ::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>* GlobalNamespace::RationalTime_TicksPerSecond::i___System__IEquatable_1___GlobalNamespace__RationalTime_TicksPerSecond_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::RationalTime_TicksPerSecond>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Numerator", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Denominator", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RationalTime_TicksPerSecond::RationalTime_TicksPerSecond(uint32_t  m_Numerator, uint32_t  m_Denominator) noexcept  {
this->m_Numerator = m_Numerator;
this->m_Denominator = m_Denominator;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RationalTime_TicksPerSecond::RationalTime_TicksPerSecond()   {
}
