#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModProperties/ModPropertyDownloads.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyNumberBase_impl.hpp"
#include "Modio/Unity/UI/Components/ModProperties/zzzz__ModPropertyDownloads_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads::GetValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9fc6230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads::*)()>(&::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9fc6250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int64_t Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads::GetValue(::Modio::Mods::Mod*  mod)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads* Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::ModProperties::ModPropertyDownloads::ModPropertyDownloads()   {
}
