#pragma once
// IWYU pragma private; include "Fusion/Internal/UnitySurrogateBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Internal/zzzz__UnitySurrogateBase_def.hpp"
#include "Fusion/Internal/zzzz__IUnitySurrogate_def.hpp"
//  Writing Method size for method: ::Fusion::Internal::UnitySurrogateBase.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Internal::UnitySurrogateBase::*)(int32_t*, int32_t)>(&::Fusion::Internal::UnitySurrogateBase::Read)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(),
                    {::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Internal::UnitySurrogateBase.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Internal::UnitySurrogateBase::*)(int32_t*, int32_t)>(&::Fusion::Internal::UnitySurrogateBase::Write)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(),
                    {::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Internal::UnitySurrogateBase.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Internal::UnitySurrogateBase::*)(int32_t)>(&::Fusion::Internal::UnitySurrogateBase::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(),
                    {::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Internal::UnitySurrogateBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Internal::UnitySurrogateBase::*)()>(&::Fusion::Internal::UnitySurrogateBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600c8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Internal::UnitySurrogateBase::Read(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
inline void Fusion::Internal::UnitySurrogateBase::Write(int32_t*  data, int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, capacity);
}
inline void Fusion::Internal::UnitySurrogateBase::Init(int32_t  capacity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
inline void Fusion::Internal::UnitySurrogateBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Internal::UnitySurrogateBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Internal::UnitySurrogateBase* Fusion::Internal::UnitySurrogateBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Internal::UnitySurrogateBase*>());
}
/// @brief Convert operator to "::Fusion::Internal::IUnitySurrogate"
constexpr  Fusion::Internal::UnitySurrogateBase::operator ::Fusion::Internal::IUnitySurrogate*() noexcept {
return static_cast<::Fusion::Internal::IUnitySurrogate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Internal::IUnitySurrogate"
constexpr ::Fusion::Internal::IUnitySurrogate* Fusion::Internal::UnitySurrogateBase::i___Fusion__Internal__IUnitySurrogate() noexcept {
return static_cast<::Fusion::Internal::IUnitySurrogate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Internal::UnitySurrogateBase::UnitySurrogateBase()   {
}
