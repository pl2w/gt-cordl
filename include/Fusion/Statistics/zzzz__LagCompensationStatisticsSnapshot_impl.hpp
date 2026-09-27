#pragma once
// IWYU pragma private; include "Fusion/Statistics/LagCompensationStatisticsSnapshot.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Statistics/zzzz__LagCompensationStatisticsSnapshot_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_TotalElapsedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_TotalElapsedTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x601fc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_TotalElapsedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_BVHMaxDeep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_BVHMaxDeep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_BVHMaxDeep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.set_BVHMaxDeep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::set_BVHMaxDeep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_BVHMaxDeep", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_BVHNodesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_BVHNodesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_BVHNodesCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.set_BVHNodesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::set_BVHNodesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_BVHNodesCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_HitboxesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_HitboxesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_HitboxesCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.set_HitboxesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(int32_t)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::set_HitboxesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_HitboxesCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_AddOnBufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_AddOnBufferTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_AddOnBufferTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.set_AddOnBufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::set_AddOnBufferTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_AddOnBufferTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_AddOnBVHTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_AddOnBVHTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_AddOnBVHTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.set_AddOnBVHTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::set_AddOnBVHTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_AddOnBVHTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_UpdateBVHTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_UpdateBVHTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_UpdateBVHTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.set_UpdateBVHTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::set_UpdateBVHTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_UpdateBVHTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_UpdateBufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_UpdateBufferTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_UpdateBufferTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.set_UpdateBufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::set_UpdateBufferTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_UpdateBufferTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_AdvanceBufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_AdvanceBufferTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_AdvanceBufferTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.set_AdvanceBufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::set_AdvanceBufferTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_AdvanceBufferTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.get_RefitBVHTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::get_RefitBVHTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_RefitBVHTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.set_RefitBVHTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::set_RefitBVHTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_RefitBVHTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.CopyFromSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(::Fusion::Statistics::LagCompensationStatisticsSnapshot*)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::CopyFromSnapshot)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x601fbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"CopyFromSnapshot", {}, {::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.ClearSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::ClearSnapshot)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x601fc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"ClearSnapshot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.SetBVHMaxDeep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::SetBVHMaxDeep)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x601fce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetBVHMaxDeep", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.SetBVHNodeCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::SetBVHNodeCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x601fd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetBVHNodeCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.SetHitboxesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(int32_t, bool)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::SetHitboxesCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x601fd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetHitboxesCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.SetAddOnBufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t, bool)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::SetAddOnBufferTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x601b784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetAddOnBufferTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.SetAddOnBVHTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t, bool)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::SetAddOnBVHTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x601b7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetAddOnBVHTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.SetUpdateBVHTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t, bool)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::SetUpdateBVHTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x601bb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetUpdateBVHTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.SetUpdateBufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t, bool)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::SetUpdateBufferTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x601baf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetUpdateBufferTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.SetAdvanceBufferTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t, bool)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::SetAdvanceBufferTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x601fd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetAdvanceBufferTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot.SetRefitBVHTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)(double_t, bool)>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::SetRefitBVHTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x601fd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetRefitBVHTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::LagCompensationStatisticsSnapshot._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::LagCompensationStatisticsSnapshot::*)()>(&::Fusion::Statistics::LagCompensationStatisticsSnapshot::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x601fb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__BVHMaxDeep_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BVHMaxDeep_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__BVHMaxDeep_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BVHMaxDeep_k__BackingField;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_set__BVHMaxDeep_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BVHMaxDeep_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__BVHNodesCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BVHNodesCount_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__BVHNodesCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BVHNodesCount_k__BackingField;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_set__BVHNodesCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BVHNodesCount_k__BackingField = value;
}
constexpr int32_t& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__HitboxesCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HitboxesCount_k__BackingField;
}
constexpr int32_t const& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__HitboxesCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HitboxesCount_k__BackingField;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_set__HitboxesCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HitboxesCount_k__BackingField = value;
}
constexpr double_t& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__AddOnBufferTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddOnBufferTime_k__BackingField;
}
constexpr double_t const& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__AddOnBufferTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddOnBufferTime_k__BackingField;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_set__AddOnBufferTime_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AddOnBufferTime_k__BackingField = value;
}
constexpr double_t& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__AddOnBVHTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddOnBVHTime_k__BackingField;
}
constexpr double_t const& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__AddOnBVHTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddOnBVHTime_k__BackingField;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_set__AddOnBVHTime_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AddOnBVHTime_k__BackingField = value;
}
constexpr double_t& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__UpdateBVHTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateBVHTime_k__BackingField;
}
constexpr double_t const& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__UpdateBVHTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateBVHTime_k__BackingField;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_set__UpdateBVHTime_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateBVHTime_k__BackingField = value;
}
constexpr double_t& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__UpdateBufferTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateBufferTime_k__BackingField;
}
constexpr double_t const& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__UpdateBufferTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UpdateBufferTime_k__BackingField;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_set__UpdateBufferTime_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UpdateBufferTime_k__BackingField = value;
}
constexpr double_t& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__AdvanceBufferTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdvanceBufferTime_k__BackingField;
}
constexpr double_t const& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__AdvanceBufferTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AdvanceBufferTime_k__BackingField;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_set__AdvanceBufferTime_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AdvanceBufferTime_k__BackingField = value;
}
constexpr double_t& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__RefitBVHTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefitBVHTime_k__BackingField;
}
constexpr double_t const& Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_get__RefitBVHTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RefitBVHTime_k__BackingField;
}
constexpr void Fusion::Statistics::LagCompensationStatisticsSnapshot::__cordl_internal_set__RefitBVHTime_k__BackingField(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RefitBVHTime_k__BackingField = value;
}
inline double_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_TotalElapsedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_TotalElapsedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_BVHMaxDeep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_BVHMaxDeep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::set_BVHMaxDeep(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_BVHMaxDeep", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_BVHNodesCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_BVHNodesCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::set_BVHNodesCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_BVHNodesCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_HitboxesCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_HitboxesCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::set_HitboxesCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_HitboxesCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_AddOnBufferTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_AddOnBufferTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::set_AddOnBufferTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_AddOnBufferTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_AddOnBVHTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_AddOnBVHTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::set_AddOnBVHTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_AddOnBVHTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_UpdateBVHTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_UpdateBVHTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::set_UpdateBVHTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_UpdateBVHTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_UpdateBufferTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_UpdateBufferTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::set_UpdateBufferTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_UpdateBufferTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_AdvanceBufferTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_AdvanceBufferTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::set_AdvanceBufferTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_AdvanceBufferTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t Fusion::Statistics::LagCompensationStatisticsSnapshot::get_RefitBVHTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"get_RefitBVHTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::set_RefitBVHTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"set_RefitBVHTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::CopyFromSnapshot(::Fusion::Statistics::LagCompensationStatisticsSnapshot*  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"CopyFromSnapshot", {}, {::i2c::type_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::ClearSnapshot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"ClearSnapshot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::SetBVHMaxDeep(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetBVHMaxDeep", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::SetBVHNodeCount(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetBVHNodeCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::SetHitboxesCount(int32_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetHitboxesCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::SetAddOnBufferTime(double_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetAddOnBufferTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::SetAddOnBVHTime(double_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetAddOnBVHTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::SetUpdateBVHTime(double_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetUpdateBVHTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::SetUpdateBufferTime(double_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetUpdateBufferTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::SetAdvanceBufferTime(double_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetAdvanceBufferTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::SetRefitBVHTime(double_t  value, bool  overrideValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {"SetRefitBVHTime", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideValue);
}
inline void Fusion::Statistics::LagCompensationStatisticsSnapshot::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::LagCompensationStatisticsSnapshot* Fusion::Statistics::LagCompensationStatisticsSnapshot::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::LagCompensationStatisticsSnapshot*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::LagCompensationStatisticsSnapshot::LagCompensationStatisticsSnapshot()   {
}
