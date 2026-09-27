#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Input/ModioUIInputListenerLoader.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Input/zzzz__ModioUIInputListenerLoader_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInputListenerLoader.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInputListenerLoader::*)()>(&::Modio::Unity::UI::Input::ModioUIInputListenerLoader::Awake)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9fb5750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInputListenerLoader*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Input::ModioUIInputListenerLoader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Input::ModioUIInputListenerLoader::*)()>(&::Modio::Unity::UI::Input::ModioUIInputListenerLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fb5918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInputListenerLoader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& Modio::Unity::UI::Input::ModioUIInputListenerLoader::__cordl_internal_get__prefabNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefabNames;
}
constexpr ::ArrayW<::StringW> const& Modio::Unity::UI::Input::ModioUIInputListenerLoader::__cordl_internal_get__prefabNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefabNames;
}
constexpr void Modio::Unity::UI::Input::ModioUIInputListenerLoader::__cordl_internal_set__prefabNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prefabNames = value;
}
constexpr ::StringW& Modio::Unity::UI::Input::ModioUIInputListenerLoader::__cordl_internal_get__fallbackPrefabName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackPrefabName;
}
constexpr ::StringW const& Modio::Unity::UI::Input::ModioUIInputListenerLoader::__cordl_internal_get__fallbackPrefabName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fallbackPrefabName;
}
constexpr void Modio::Unity::UI::Input::ModioUIInputListenerLoader::__cordl_internal_set__fallbackPrefabName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fallbackPrefabName = value;
}
inline void Modio::Unity::UI::Input::ModioUIInputListenerLoader::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInputListenerLoader*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Input::ModioUIInputListenerLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Input::ModioUIInputListenerLoader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Input::ModioUIInputListenerLoader* Modio::Unity::UI::Input::ModioUIInputListenerLoader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Input::ModioUIInputListenerLoader*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Input::ModioUIInputListenerLoader::ModioUIInputListenerLoader()   {
}
