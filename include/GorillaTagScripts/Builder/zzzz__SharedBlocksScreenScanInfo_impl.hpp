#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksScreenScanInfo.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksScreen_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksScreenScanInfo_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo.OnUpPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::*)()>(&::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::OnUpPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c40410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo.OnDownPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::*)()>(&::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::OnDownPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c40414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo.OnSelectPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::*)()>(&::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::OnSelectPressed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c40418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::*)()>(&::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::Show)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c40a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo.DrawScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::*)()>(&::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::DrawScreen)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c40ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(),
                        {"DrawScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::*)()>(&::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c40dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::__cordl_internal_get_mapIDText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapIDText;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::__cordl_internal_get_mapIDText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapIDText;
}
constexpr void GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::__cordl_internal_set_mapIDText(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapIDText = value;
}
inline void GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::OnUpPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::OnDownPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::OnSelectPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::Show()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::DrawScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(),
                        {"DrawScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo* GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksScreenScanInfo::SharedBlocksScreenScanInfo()   {
}
