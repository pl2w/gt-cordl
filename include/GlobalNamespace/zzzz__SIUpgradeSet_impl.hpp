#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUpgradeSet.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeSet::*)()>(&::GlobalNamespace::SIUpgradeSet::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d6aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeSet::*)(int32_t)>(&::GlobalNamespace::SIUpgradeSet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d6ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.GetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIUpgradeSet::*)()>(&::GlobalNamespace::SIUpgradeSet::GetBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d6abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"GetBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.SetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeSet::*)(int32_t)>(&::GlobalNamespace::SIUpgradeSet::SetBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d6ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"SetBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.GetCreateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::SIUpgradeSet::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIUpgradeSet::GetCreateData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59d6acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"GetCreateData", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeSet::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIUpgradeSet::Add)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59d6b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeSet::*)(int32_t)>(&::GlobalNamespace::SIUpgradeSet::Add)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59d6bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Add", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIUpgradeSet::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIUpgradeSet::Remove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59d6be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIUpgradeSet::*)(::GlobalNamespace::SIUpgradeType)>(&::GlobalNamespace::SIUpgradeSet::Contains)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59d5db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Contains", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.ContainsAny
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIUpgradeSet::*)(::ArrayW<::GlobalNamespace::SIUpgradeType>)>(&::GlobalNamespace::SIUpgradeSet::ContainsAny)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59d6c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"ContainsAny", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SIUpgradeType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIUpgradeSet.GetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SIUpgradeSet::*)(::GlobalNamespace::SITechTreePageId)>(&::GlobalNamespace::SIUpgradeSet::GetString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x59d6ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"GetString", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SIUpgradeSet::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SIUpgradeSet::_ctor(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bits);
}
inline int32_t GlobalNamespace::SIUpgradeSet::GetBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"GetBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::SIUpgradeSet::SetBits(int32_t  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"SetBits", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bits);
}
inline int64_t GlobalNamespace::SIUpgradeSet::GetCreateData(::GlobalNamespace::SIPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"GetCreateData", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, player);
}
inline void GlobalNamespace::SIUpgradeSet::Add(::GlobalNamespace::SIUpgradeType  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, upgrade);
}
inline void GlobalNamespace::SIUpgradeSet::Add(int32_t  nodeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Add", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nodeId);
}
inline void GlobalNamespace::SIUpgradeSet::Remove(::GlobalNamespace::SIUpgradeType  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Remove", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, upgrade);
}
inline bool GlobalNamespace::SIUpgradeSet::Contains(::GlobalNamespace::SIUpgradeType  upgrade)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"Contains", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, upgrade);
}
inline bool GlobalNamespace::SIUpgradeSet::ContainsAny(/* [ParamArray] */ ::ArrayW<::GlobalNamespace::SIUpgradeType>  upgrades)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"ContainsAny", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SIUpgradeType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, upgrades);
}
inline ::StringW GlobalNamespace::SIUpgradeSet::GetString(::GlobalNamespace::SITechTreePageId  pageId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIUpgradeSet>(),
                        {"GetString", {}, {::i2c::type_of<::GlobalNamespace::SITechTreePageId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, pageId);
}
// Ctor Parameters [CppParam { name: "backingBits", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIUpgradeSet::SIUpgradeSet(int32_t  backingBits) noexcept  {
this->backingBits = backingBits;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIUpgradeSet::SIUpgradeSet()   {
}
