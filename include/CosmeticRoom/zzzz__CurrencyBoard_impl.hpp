#pragma once
// IWYU pragma private; include "CosmeticRoom/CurrencyBoard.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "CosmeticRoom/zzzz__CurrencyBoard_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::CosmeticRoom::CurrencyBoard.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::CurrencyBoard::*)()>(&::CosmeticRoom::CurrencyBoard::OnEnable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c4b9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::CurrencyBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::CurrencyBoard.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::CurrencyBoard::*)()>(&::CosmeticRoom::CurrencyBoard::OnDisable)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c4ba4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::CurrencyBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::CurrencyBoard.UpdateCurrencyBoard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::CurrencyBoard::*)(bool, bool, int32_t, int32_t)>(&::CosmeticRoom::CurrencyBoard::UpdateCurrencyBoard)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5c4bac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::CurrencyBoard*>(),
                        {"UpdateCurrencyBoard", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CosmeticRoom::CurrencyBoard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::CosmeticRoom::CurrencyBoard::*)()>(&::CosmeticRoom::CurrencyBoard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c4bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::CurrencyBoard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& CosmeticRoom::CurrencyBoard::__cordl_internal_get_dailyRocksTextTMP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyRocksTextTMP;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& CosmeticRoom::CurrencyBoard::__cordl_internal_get_dailyRocksTextTMP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dailyRocksTextTMP;
}
constexpr void CosmeticRoom::CurrencyBoard::__cordl_internal_set_dailyRocksTextTMP(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dailyRocksTextTMP = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& CosmeticRoom::CurrencyBoard::__cordl_internal_get_currencyBoardTextTMP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyBoardTextTMP;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& CosmeticRoom::CurrencyBoard::__cordl_internal_get_currencyBoardTextTMP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyBoardTextTMP;
}
constexpr void CosmeticRoom::CurrencyBoard::__cordl_internal_set_currencyBoardTextTMP(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currencyBoardTextTMP = value;
}
inline void CosmeticRoom::CurrencyBoard::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::CurrencyBoard*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::CurrencyBoard::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::CurrencyBoard*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void CosmeticRoom::CurrencyBoard::UpdateCurrencyBoard(bool  checkedDaily, bool  gotDaily, int32_t  currencyBalance, int32_t  secTilTomorrow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::CurrencyBoard*>(),
                        {"UpdateCurrencyBoard", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, checkedDaily, gotDaily, currencyBalance, secTilTomorrow);
}
inline void CosmeticRoom::CurrencyBoard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CosmeticRoom::CurrencyBoard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::CosmeticRoom::CurrencyBoard* CosmeticRoom::CurrencyBoard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::CosmeticRoom::CurrencyBoard*>());
}
// Ctor Parameters []
constexpr ::CosmeticRoom::CurrencyBoard::CurrencyBoard()   {
}
