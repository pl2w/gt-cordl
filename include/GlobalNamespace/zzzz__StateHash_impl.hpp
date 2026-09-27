#pragma once
// IWYU pragma private; include "GlobalNamespace/StateHash.hpp"
#include "GlobalNamespace/zzzz__StateHash_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StateHash.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StateHash::*)()>(&::GlobalNamespace::StateHash::GetHashCode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a210fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {::i2c::class_of<::GlobalNamespace::StateHash>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StateHash.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StateHash::*)()>(&::GlobalNamespace::StateHash::ToString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a21170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {::i2c::class_of<::GlobalNamespace::StateHash>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StateHash.Changed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StateHash::*)()>(&::GlobalNamespace::StateHash::Changed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a21194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateHash>(),
                        {"Changed", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::StateHash::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StateHash>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::StateHash::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::StateHash>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::StateHash::Changed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StateHash>(),
                        {"Changed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T0>
inline void GlobalNamespace::StateHash::Poll(T0  v0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T0>()}, {::i2c::type_of<T0>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v0);
}
template<typename T1,typename T2>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2);
}
template<typename T1,typename T2,typename T3>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3);
}
template<typename T1,typename T2,typename T3,typename T4>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7, v8);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7, v8, v9);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12, T13  v13)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12, T13  v13, T14  v14)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>(), ::i2c::type_of<T14>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12, T13  v13, T14  v14, T15  v15)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>(), ::i2c::type_of<T14>(), ::i2c::type_of<T15>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
}
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename T16>
inline void GlobalNamespace::StateHash::Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12, T13  v13, T14  v14, T15  v15, T16  v16)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::StateHash>(),
                    {"Poll", {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>(), ::i2c::class_of<T16>()}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>(), ::i2c::type_of<T3>(), ::i2c::type_of<T4>(), ::i2c::type_of<T5>(), ::i2c::type_of<T6>(), ::i2c::type_of<T7>(), ::i2c::type_of<T8>(), ::i2c::type_of<T9>(), ::i2c::type_of<T10>(), ::i2c::type_of<T11>(), ::i2c::type_of<T12>(), ::i2c::type_of<T13>(), ::i2c::type_of<T14>(), ::i2c::type_of<T15>(), ::i2c::type_of<T16>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>(), ::i2c::class_of<T4>(), ::i2c::class_of<T5>(), ::i2c::class_of<T6>(), ::i2c::class_of<T7>(), ::i2c::class_of<T8>(), ::i2c::class_of<T9>(), ::i2c::class_of<T10>(), ::i2c::class_of<T11>(), ::i2c::class_of<T12>(), ::i2c::class_of<T13>(), ::i2c::class_of<T14>(), ::i2c::class_of<T15>(), ::i2c::class_of<T16>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
}
// Ctor Parameters [CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StateHash::StateHash(int32_t  last, int32_t  next) noexcept  {
this->last = last;
this->next = next;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StateHash::StateHash()   {
}
