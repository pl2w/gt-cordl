#pragma once
// IWYU pragma private; include "Meta/Conduit/ManifestLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__ManifestLoader_def.hpp"
#include "Meta/Conduit/zzzz__IManifestLoader_def.hpp"
#include "Meta/Conduit/zzzz__ManifestLoader__LoadManifestAsync_d__5_def.hpp"
#include "Meta/Conduit/zzzz__ManifestLoader__LoadManifestFromJsonAsync_d__6_def.hpp"
#include "Meta/Conduit/zzzz__ManifestLoader_def.hpp"
#include "Meta/Conduit/zzzz__Manifest_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::ManifestLoader.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Conduit::ManifestLoader::*)()>(&::Meta::Conduit::ManifestLoader::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e221b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestLoader.LoadManifestAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::Conduit::Manifest*>* (::Meta::Conduit::ManifestLoader::*)(::StringW)>(&::Meta::Conduit::ManifestLoader::LoadManifestAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e221bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader*>(),
                        {"LoadManifestAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestLoader.LoadManifestFromJsonAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::Conduit::Manifest*>* (::Meta::Conduit::ManifestLoader::*)(::StringW)>(&::Meta::Conduit::ManifestLoader::LoadManifestFromJsonAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e222dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader*>(),
                        {"LoadManifestFromJsonAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestLoader::*)()>(&::Meta::Conduit::ManifestLoader::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e1e964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Conduit::ManifestLoader::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Conduit::ManifestLoader::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::Conduit::ManifestLoader::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Conduit::ManifestLoader::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Meta::Conduit::Manifest*>* Meta::Conduit::ManifestLoader::LoadManifestAsync(::StringW  manifestLocalPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader*>(),
                        {"LoadManifestAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::Conduit::Manifest*>*>(this, ___internal_method, manifestLocalPath);
}
inline ::System::Threading::Tasks::Task_1<::Meta::Conduit::Manifest*>* Meta::Conduit::ManifestLoader::LoadManifestFromJsonAsync(::StringW  manifestText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader*>(),
                        {"LoadManifestFromJsonAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::Conduit::Manifest*>*>(this, ___internal_method, manifestText);
}
inline void Meta::Conduit::ManifestLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Conduit::ManifestLoader* Meta::Conduit::ManifestLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::ManifestLoader*>());
}
/// @brief Convert operator to "::Meta::Conduit::IManifestLoader"
constexpr  Meta::Conduit::ManifestLoader::operator ::Meta::Conduit::IManifestLoader*() noexcept {
return static_cast<::Meta::Conduit::IManifestLoader*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Conduit::IManifestLoader"
constexpr ::Meta::Conduit::IManifestLoader* Meta::Conduit::ManifestLoader::i___Meta__Conduit__IManifestLoader() noexcept {
return static_cast<::Meta::Conduit::IManifestLoader*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ManifestLoader::ManifestLoader()   {
}
//  Writing Method size for method: ::Meta::Conduit::ManifestLoader___c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestLoader___c__DisplayClass6_0::*)()>(&::Meta::Conduit::ManifestLoader___c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e223fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestLoader___c__DisplayClass6_0._LoadManifestFromJsonAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestLoader___c__DisplayClass6_0::*)()>(&::Meta::Conduit::ManifestLoader___c__DisplayClass6_0::_LoadManifestFromJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9e22404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*>(),
                        {"<LoadManifestFromJsonAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Conduit::Manifest*& Meta::Conduit::ManifestLoader___c__DisplayClass6_0::__cordl_internal_get_manifest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manifest;
}
constexpr ::Meta::Conduit::Manifest* const& Meta::Conduit::ManifestLoader___c__DisplayClass6_0::__cordl_internal_get_manifest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manifest;
}
constexpr void Meta::Conduit::ManifestLoader___c__DisplayClass6_0::__cordl_internal_set_manifest(::Meta::Conduit::Manifest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manifest = value;
}
constexpr ::Meta::Conduit::ManifestLoader*& Meta::Conduit::ManifestLoader___c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Conduit::ManifestLoader* const& Meta::Conduit::ManifestLoader___c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Conduit::ManifestLoader___c__DisplayClass6_0::__cordl_internal_set___4__this(::Meta::Conduit::ManifestLoader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::Conduit::ManifestLoader___c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestLoader___c__DisplayClass6_0::_LoadManifestFromJsonAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*>(),
                        {"<LoadManifestFromJsonAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Conduit::ManifestLoader___c__DisplayClass6_0* Meta::Conduit::ManifestLoader___c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::ManifestLoader___c__DisplayClass6_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ManifestLoader___c__DisplayClass6_0::ManifestLoader___c__DisplayClass6_0()   {
}
