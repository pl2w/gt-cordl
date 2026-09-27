#pragma once
// IWYU pragma private; include "System/Decimal_DecCalc.hpp"
#include "System/zzzz__Decimal_DecCalc_PowerOvfl_impl.hpp"
#include "System/zzzz__Decimal_DecCalc_def.hpp"
#include "System/zzzz__Decimal_DecCalc_Buf12_def.hpp"
#include "System/zzzz__Decimal_DecCalc_Buf16_def.hpp"
#include "System/zzzz__Decimal_DecCalc_Buf24_def.hpp"
#include "System/zzzz__Decimal_DecCalc_Buf28_def.hpp"
#include "System/zzzz__Decimal_DecCalc_PowerOvfl_def.hpp"
#include "System/zzzz__Decimal_DecCalc_RoundingMode_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.get_High
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::Decimal_DecCalc::*)()>(&::GlobalNamespace::Decimal_DecCalc::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa340e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_High", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.set_High
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Decimal_DecCalc::*)(uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::set_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa340ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"set_High", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.get_Low
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::Decimal_DecCalc::*)()>(&::GlobalNamespace::Decimal_DecCalc::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa340ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_Low", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.set_Low
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Decimal_DecCalc::*)(uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::set_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa340eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"set_Low", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.get_Mid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::GlobalNamespace::Decimal_DecCalc::*)()>(&::GlobalNamespace::Decimal_DecCalc::get_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa340eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_Mid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.set_Mid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Decimal_DecCalc::*)(uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::set_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa340ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"set_Mid", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.get_IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Decimal_DecCalc::*)()>(&::GlobalNamespace::Decimal_DecCalc::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa340ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_IsNegative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.get_Low64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::Decimal_DecCalc::*)()>(&::GlobalNamespace::Decimal_DecCalc::get_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa340ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_Low64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.set_Low64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Decimal_DecCalc::*)(uint64_t)>(&::GlobalNamespace::Decimal_DecCalc::set_Low64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa340edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"set_Low64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.GetExponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(float_t)>(&::GlobalNamespace::Decimal_DecCalc::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa340ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"GetExponent", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.GetExponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(double_t)>(&::GlobalNamespace::Decimal_DecCalc::GetExponent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa340ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"GetExponent", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.UInt32x32To64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t, uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::UInt32x32To64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa340efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"UInt32x32To64", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.UInt64x64To128
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, uint64_t, ::by_ref<::GlobalNamespace::Decimal_DecCalc>)>(&::GlobalNamespace::Decimal_DecCalc::UInt64x64To128)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa340f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"UInt64x64To128", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.Div96By32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>, uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::Div96By32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa34102c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Div96By32", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.Div96ByConst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<uint64_t>, ::by_ref<uint32_t>, uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::Div96ByConst)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa3410ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Div96ByConst", {}, {::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.Unscale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::by_ref<uint64_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::Decimal_DecCalc::Unscale)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa3410e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Unscale", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.Div96By64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>, uint64_t)>(&::GlobalNamespace::Decimal_DecCalc::Div96By64)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa341374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Div96By64", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.Div128By96
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf16>, ::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>)>(&::GlobalNamespace::Decimal_DecCalc::Div128By96)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa341470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Div128By96", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf16>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.IncreaseScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>, uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::IncreaseScale)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa341598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"IncreaseScale", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.IncreaseScale64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>, uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::IncreaseScale64)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa341620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"IncreaseScale64", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.ScaleResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::DecCalc_Decimal_Buf24*, uint32_t, int32_t)>(&::GlobalNamespace::Decimal_DecCalc::ScaleResult)> {
  constexpr static std::size_t size = 0xc24;
  constexpr static std::size_t addrs = 0xa341698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"ScaleResult", {}, {::i2c::type_of<::GlobalNamespace::DecCalc_Decimal_Buf24*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.DivByConst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t*, uint32_t, ::by_ref<uint32_t>, ::by_ref<uint32_t>, uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::DivByConst)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa3422bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"DivByConst", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.LeadingZeroCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::LeadingZeroCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa34230c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"LeadingZeroCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.OverflowUnscale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>, int32_t, bool)>(&::GlobalNamespace::Decimal_DecCalc::OverflowUnscale)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa342370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"OverflowUnscale", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.SearchScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>, int32_t)>(&::GlobalNamespace::Decimal_DecCalc::SearchScale)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa3424c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"SearchScale", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.Add32To96
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>, uint32_t)>(&::GlobalNamespace::Decimal_DecCalc::Add32To96)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa342498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Add32To96", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.DecAddSub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Decimal_DecCalc>, ::by_ref<::GlobalNamespace::Decimal_DecCalc>, bool)>(&::GlobalNamespace::Decimal_DecCalc::DecAddSub)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0xa33bfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"DecAddSub", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarDecCmp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::GlobalNamespace::Decimal_DecCalc::VarDecCmp)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa33c6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecCmp", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarDecCmpSub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::GlobalNamespace::Decimal_DecCalc::VarDecCmpSub)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa3426d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecCmpSub", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarDecMul
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Decimal_DecCalc>, ::by_ref<::GlobalNamespace::Decimal_DecCalc>)>(&::GlobalNamespace::Decimal_DecCalc::VarDecMul)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0xa33e264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecMul", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarDecFromR4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::by_ref<::GlobalNamespace::Decimal_DecCalc>)>(&::GlobalNamespace::Decimal_DecCalc::VarDecFromR4)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xa33b39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecFromR4", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarDecFromR8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(double_t, ::by_ref<::GlobalNamespace::Decimal_DecCalc>)>(&::GlobalNamespace::Decimal_DecCalc::VarDecFromR8)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0xa33b828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecFromR8", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarR4FromDec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::System::Decimal>)>(&::GlobalNamespace::Decimal_DecCalc::VarR4FromDec)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa33f808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarR4FromDec", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarR8FromDec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::by_ref<::System::Decimal>)>(&::GlobalNamespace::Decimal_DecCalc::VarR8FromDec)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa33f1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarR8FromDec", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::Decimal>)>(&::GlobalNamespace::Decimal_DecCalc::GetHashCode)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa33d498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"GetHashCode", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarDecDiv
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Decimal_DecCalc>, ::by_ref<::GlobalNamespace::Decimal_DecCalc>)>(&::GlobalNamespace::Decimal_DecCalc::VarDecDiv)> {
  constexpr static std::size_t size = 0x850;
  constexpr static std::size_t addrs = 0xa33ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecDiv", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarDecMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Decimal_DecCalc>, ::by_ref<::GlobalNamespace::Decimal_DecCalc>)>(&::GlobalNamespace::Decimal_DecCalc::VarDecMod)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0xa340104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecMod", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.VarDecModFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Decimal_DecCalc>, ::by_ref<::GlobalNamespace::Decimal_DecCalc>, int32_t)>(&::GlobalNamespace::Decimal_DecCalc::VarDecModFull)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0xa3428a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecModFull", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.InternalRound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Decimal_DecCalc>, uint32_t, ::GlobalNamespace::DecCalc_Decimal_RoundingMode)>(&::GlobalNamespace::Decimal_DecCalc::InternalRound)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xa33d6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"InternalRound", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::DecCalc_Decimal_RoundingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Decimal_DecCalc.DecDivMod1E9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::GlobalNamespace::Decimal_DecCalc>)>(&::GlobalNamespace::Decimal_DecCalc::DecDivMod1E9)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa33b26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_uflags()  {
return this->___uflags;
}
constexpr uint32_t const& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_uflags() const {
return this->___uflags;
}
constexpr void GlobalNamespace::Decimal_DecCalc::__cordl_internal_set_uflags(uint32_t  value)  {
this->___uflags = value;
}
constexpr uint32_t& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_uhi()  {
return this->___uhi;
}
constexpr uint32_t const& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_uhi() const {
return this->___uhi;
}
constexpr void GlobalNamespace::Decimal_DecCalc::__cordl_internal_set_uhi(uint32_t  value)  {
this->___uhi = value;
}
constexpr uint32_t& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_ulo()  {
return this->___ulo;
}
constexpr uint32_t const& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_ulo() const {
return this->___ulo;
}
constexpr void GlobalNamespace::Decimal_DecCalc::__cordl_internal_set_ulo(uint32_t  value)  {
this->___ulo = value;
}
constexpr uint32_t& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_umid()  {
return this->___umid;
}
constexpr uint32_t const& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_umid() const {
return this->___umid;
}
constexpr void GlobalNamespace::Decimal_DecCalc::__cordl_internal_set_umid(uint32_t  value)  {
this->___umid = value;
}
constexpr uint64_t& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_ulomidLE()  {
return this->___ulomidLE;
}
constexpr uint64_t const& GlobalNamespace::Decimal_DecCalc::__cordl_internal_get_ulomidLE() const {
return this->___ulomidLE;
}
constexpr void GlobalNamespace::Decimal_DecCalc::__cordl_internal_set_ulomidLE(uint64_t  value)  {
this->___ulomidLE = value;
}
inline void GlobalNamespace::Decimal_DecCalc::setStaticF_s_powers10(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_powers10", ::GlobalNamespace::Decimal_DecCalc>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> GlobalNamespace::Decimal_DecCalc::getStaticF_s_powers10()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_powers10", ::GlobalNamespace::Decimal_DecCalc>();
}
inline void GlobalNamespace::Decimal_DecCalc::setStaticF_s_ulongPowers10(::ArrayW<uint64_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_ulongPowers10", ::GlobalNamespace::Decimal_DecCalc>(std::forward<::ArrayW<uint64_t>>(value));
}
inline ::ArrayW<uint64_t> GlobalNamespace::Decimal_DecCalc::getStaticF_s_ulongPowers10()  {
return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_ulongPowers10", ::GlobalNamespace::Decimal_DecCalc>();
}
inline void GlobalNamespace::Decimal_DecCalc::setStaticF_s_doublePowers10(::ArrayW<double_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<double_t>, "s_doublePowers10", ::GlobalNamespace::Decimal_DecCalc>(std::forward<::ArrayW<double_t>>(value));
}
inline ::ArrayW<double_t> GlobalNamespace::Decimal_DecCalc::getStaticF_s_doublePowers10()  {
return ::cordl_internals::getStaticField<::ArrayW<double_t>, "s_doublePowers10", ::GlobalNamespace::Decimal_DecCalc>();
}
inline void GlobalNamespace::Decimal_DecCalc::setStaticF_PowerOvflValues(::ArrayW<::GlobalNamespace::DecCalc_Decimal_PowerOvfl>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::DecCalc_Decimal_PowerOvfl>, "PowerOvflValues", ::GlobalNamespace::Decimal_DecCalc>(std::forward<::ArrayW<::GlobalNamespace::DecCalc_Decimal_PowerOvfl>>(value));
}
inline ::ArrayW<::GlobalNamespace::DecCalc_Decimal_PowerOvfl> GlobalNamespace::Decimal_DecCalc::getStaticF_PowerOvflValues()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::DecCalc_Decimal_PowerOvfl>, "PowerOvflValues", ::GlobalNamespace::Decimal_DecCalc>();
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::get_High()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_High", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Decimal_DecCalc::set_High(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"set_High", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::get_Low()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_Low", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Decimal_DecCalc::set_Low(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"set_Low", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::get_Mid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_Mid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Decimal_DecCalc::set_Mid(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"set_Mid", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::Decimal_DecCalc::get_IsNegative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_IsNegative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint64_t GlobalNamespace::Decimal_DecCalc::get_Low64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"get_Low64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline void GlobalNamespace::Decimal_DecCalc::set_Low64(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"set_Low64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::GetExponent(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"GetExponent", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, f);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::GetExponent(double_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"GetExponent", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, d);
}
inline uint64_t GlobalNamespace::Decimal_DecCalc::UInt32x32To64(uint32_t  a, uint32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"UInt32x32To64", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::Decimal_DecCalc::UInt64x64To128(uint64_t  a, uint64_t  b, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"UInt64x64To128", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b, result);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::Div96By32(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint32_t  den)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Div96By32", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bufNum, den);
}
inline bool GlobalNamespace::Decimal_DecCalc::Div96ByConst(::by_ref<uint64_t>  high64, ::by_ref<uint32_t>  low, uint32_t  pow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Div96ByConst", {}, {::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, high64, low, pow);
}
inline void GlobalNamespace::Decimal_DecCalc::Unscale(::by_ref<uint32_t>  low, ::by_ref<uint64_t>  high64, ::by_ref<int32_t>  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Unscale", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, low, high64, scale);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::Div96By64(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint64_t  den)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Div96By64", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bufNum, den);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::Div128By96(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf16>  bufNum, ::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufDen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Div128By96", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf16>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bufNum, bufDen);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::IncreaseScale(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint32_t  power)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"IncreaseScale", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, bufNum, power);
}
inline void GlobalNamespace::Decimal_DecCalc::IncreaseScale64(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint32_t  power)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"IncreaseScale64", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bufNum, power);
}
inline int32_t GlobalNamespace::Decimal_DecCalc::ScaleResult(::GlobalNamespace::DecCalc_Decimal_Buf24*  bufRes, uint32_t  hiRes, int32_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"ScaleResult", {}, {::i2c::type_of<::GlobalNamespace::DecCalc_Decimal_Buf24*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bufRes, hiRes, scale);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::DivByConst(uint32_t*  result, uint32_t  hiRes, ::by_ref<uint32_t>  quotient, ::by_ref<uint32_t>  remainder, uint32_t  power)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"DivByConst", {}, {::i2c::type_of<uint32_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, result, hiRes, quotient, remainder, power);
}
inline int32_t GlobalNamespace::Decimal_DecCalc::LeadingZeroCount(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"LeadingZeroCount", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::Decimal_DecCalc::OverflowUnscale(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufQuo, int32_t  scale, bool  sticky)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"OverflowUnscale", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bufQuo, scale, sticky);
}
inline int32_t GlobalNamespace::Decimal_DecCalc::SearchScale(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufQuo, int32_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"SearchScale", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, bufQuo, scale);
}
inline bool GlobalNamespace::Decimal_DecCalc::Add32To96(::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>  bufNum, uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"Add32To96", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::DecCalc_Decimal_Buf12>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, bufNum, value);
}
inline void GlobalNamespace::Decimal_DecCalc::DecAddSub(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2, bool  sign)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"DecAddSub", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d1, d2, sign);
}
inline int32_t GlobalNamespace::Decimal_DecCalc::VarDecCmp(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  d1, /* [IsReadOnly] */ ::by_ref<::System::Decimal>  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecCmp", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d1, d2);
}
inline int32_t GlobalNamespace::Decimal_DecCalc::VarDecCmpSub(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  d1, /* [IsReadOnly] */ ::by_ref<::System::Decimal>  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecCmpSub", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d1, d2);
}
inline void GlobalNamespace::Decimal_DecCalc::VarDecMul(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecMul", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d1, d2);
}
inline void GlobalNamespace::Decimal_DecCalc::VarDecFromR4(float_t  input, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecFromR4", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, result);
}
inline void GlobalNamespace::Decimal_DecCalc::VarDecFromR8(double_t  input, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecFromR8", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, result);
}
inline float_t GlobalNamespace::Decimal_DecCalc::VarR4FromDec(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarR4FromDec", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t GlobalNamespace::Decimal_DecCalc::VarR8FromDec(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarR8FromDec", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline int32_t GlobalNamespace::Decimal_DecCalc::GetHashCode(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"GetHashCode", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d);
}
inline void GlobalNamespace::Decimal_DecCalc::VarDecDiv(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecDiv", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d1, d2);
}
inline void GlobalNamespace::Decimal_DecCalc::VarDecMod(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecMod", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d1, d2);
}
inline void GlobalNamespace::Decimal_DecCalc::VarDecModFull(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d1, ::by_ref<::GlobalNamespace::Decimal_DecCalc>  d2, int32_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"VarDecModFull", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d1, d2, scale);
}
inline void GlobalNamespace::Decimal_DecCalc::InternalRound(::by_ref<::GlobalNamespace::Decimal_DecCalc>  d, uint32_t  scale, ::GlobalNamespace::DecCalc_Decimal_RoundingMode  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"InternalRound", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::DecCalc_Decimal_RoundingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d, scale, mode);
}
inline uint32_t GlobalNamespace::Decimal_DecCalc::DecDivMod1E9(::by_ref<::GlobalNamespace::Decimal_DecCalc>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Decimal_DecCalc>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Decimal_DecCalc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "uflags", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uhi", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ulo", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "umid", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Decimal_DecCalc::Decimal_DecCalc(uint32_t  uflags, uint32_t  uhi, uint32_t  ulo, uint32_t  umid, uint64_t  ulomidLE) noexcept  {
this->uflags = uflags;
this->uhi = uhi;
this->ulo = ulo;
this->umid = umid;
this->ulomidLE = ulomidLE;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Decimal_DecCalc::Decimal_DecCalc()   {
}
