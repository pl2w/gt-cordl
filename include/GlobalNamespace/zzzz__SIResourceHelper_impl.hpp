#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SIResourceHelper_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCategoryCost_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCost_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.IsInOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResourceHelper::IsInOrder)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5ae7fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"IsInOrder", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResourceHelper::IsValid)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5ae8250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.IsValid_AllowZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResourceHelper::IsValid_AllowZero)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5ae8590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"IsValid_AllowZero", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.GetCategoryCosts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SIResource_ResourceCategoryCost (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResourceHelper::GetCategoryCosts)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5ae70fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetCategoryCosts", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.GetTotalResourceCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResourceHelper::GetTotalResourceCost)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5ae88c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetTotalResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.GetMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResourceHelper::GetMax)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5ae8c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetMax", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.GetAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, ::GlobalNamespace::SIResource_ResourceType)>(&::GlobalNamespace::SIResourceHelper::GetAmount)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5ae6cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetAmount", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.SetAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*, ::GlobalNamespace::SIResource_ResourceType, int32_t)>(&::GlobalNamespace::SIResourceHelper::SetAmount)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5ae6f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"SetAmount", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.AddResourceCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*, ::GlobalNamespace::SIResource_ResourceCost)>(&::GlobalNamespace::SIResourceHelper::AddResourceCost)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ae6830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"AddResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceCost>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.AddResourceCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResourceHelper::AddResourceCost)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5ae8f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"AddResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.GetTechPointCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResourceHelper::GetTechPointCost)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5ae922c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetTechPointCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.GetMiscCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResourceHelper::GetMiscCost)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5ae94cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetMiscCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.SetResourceCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, ::GlobalNamespace::SIResource_ResourceCategoryCost)>(&::GlobalNamespace::SIResourceHelper::SetResourceCost)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ae976c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"SetResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceCategoryCost>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.AddResourceCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, ::GlobalNamespace::SIResource_ResourceCategoryCost)>(&::GlobalNamespace::SIResourceHelper::AddResourceCost)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ae9c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"AddResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceCategoryCost>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.SetTechPointCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, int32_t)>(&::GlobalNamespace::SIResourceHelper::SetTechPointCost)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5ae9794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"SetTechPointCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceHelper.SetMiscCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, int32_t)>(&::GlobalNamespace::SIResourceHelper::SetMiscCost)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5ae999c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"SetMiscCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::SIResourceHelper::IsInOrder(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"IsInOrder", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cost);
}
inline bool GlobalNamespace::SIResourceHelper::IsValid(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"IsValid", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cost);
}
inline bool GlobalNamespace::SIResourceHelper::IsValid_AllowZero(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"IsValid_AllowZero", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cost);
}
inline ::GlobalNamespace::SIResource_ResourceCategoryCost GlobalNamespace::SIResourceHelper::GetCategoryCosts(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetCategoryCosts", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SIResource_ResourceCategoryCost>(nullptr, ___internal_method, costs);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* GlobalNamespace::SIResourceHelper::GetTotalResourceCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  additiveCosts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetTotalResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(nullptr, ___internal_method, baseCost, additiveCosts);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* GlobalNamespace::SIResourceHelper::GetMax(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  additiveCosts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetMax", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(nullptr, ___internal_method, baseCost, additiveCosts);
}
inline int32_t GlobalNamespace::SIResourceHelper::GetAmount(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs, ::GlobalNamespace::SIResource_ResourceType  resourceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetAmount", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, costs, resourceType);
}
inline void GlobalNamespace::SIResourceHelper::SetAmount(::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*  costs, ::GlobalNamespace::SIResource_ResourceType  resourceType, int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"SetAmount", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, costs, resourceType, amount);
}
inline void GlobalNamespace::SIResourceHelper::AddResourceCost(::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::GlobalNamespace::SIResource_ResourceCost  additiveCost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"AddResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceCost>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCost, additiveCost);
}
inline void GlobalNamespace::SIResourceHelper::AddResourceCost(::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  additiveCost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"AddResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCost, additiveCost);
}
inline int32_t GlobalNamespace::SIResourceHelper::GetTechPointCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetTechPointCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, costs);
}
inline int32_t GlobalNamespace::SIResourceHelper::GetMiscCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"GetMiscCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, costs);
}
inline void GlobalNamespace::SIResourceHelper::SetResourceCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  costs, ::GlobalNamespace::SIResource_ResourceCategoryCost  desiredCosts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"SetResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceCategoryCost>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, costs, desiredCosts);
}
inline void GlobalNamespace::SIResourceHelper::AddResourceCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, ::GlobalNamespace::SIResource_ResourceCategoryCost  additiveCost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"AddResourceCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceCategoryCost>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCost, additiveCost);
}
inline void GlobalNamespace::SIResourceHelper::SetTechPointCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, int32_t  desiredCost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"SetTechPointCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCost, desiredCost);
}
inline void GlobalNamespace::SIResourceHelper::SetMiscCost(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  baseCost, int32_t  desiredCost)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceHelper*>(),
                        {"SetMiscCost", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, baseCost, desiredCost);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceHelper::SIResourceHelper()   {
}
