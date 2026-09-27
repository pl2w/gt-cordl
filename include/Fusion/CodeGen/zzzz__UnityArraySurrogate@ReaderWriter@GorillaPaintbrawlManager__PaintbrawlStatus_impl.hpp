#pragma once
// IWYU pragma private; include "Fusion/CodeGen/UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.hpp"
#include "Fusion/CodeGen/zzzz__ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus_impl.hpp"
#include "Fusion/Internal/zzzz__UnityArraySurrogate_2_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlStatus_impl.hpp"
#include "Fusion/CodeGen/zzzz__UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlStatus_def.hpp"
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.get_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> (::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::get_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus.set_DataProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::*)(::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>)>(&::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::set_DataProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e2f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*>(),
                    {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::*)()>(&::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e2f2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>& Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::__cordl_internal_get_Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> const& Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::__cordl_internal_get_Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Data;
}
constexpr void Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::__cordl_internal_set_Data(::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Data = value;
}
inline ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::get_DataProperty()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>>(this, ___internal_method);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::set_DataProperty(::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [WeaverGenerated]
inline ::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus* Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus*>());
}
// Ctor Parameters []
constexpr ::Fusion::CodeGen::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus::UnityArraySurrogate@ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus()   {
}
