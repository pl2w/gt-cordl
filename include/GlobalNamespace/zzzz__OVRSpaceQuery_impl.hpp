#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpaceQuery.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceStorageLocation_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_def.hpp"
#include "GlobalNamespace/zzzz__OVREnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_Options_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_QueryInfoUnion_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>)>(&::GlobalNamespace::OVRSpaceQuery::ForAnchors)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa63dfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForAnchors", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForAnchorsUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::GlobalNamespace::OVREnumerable_1<::System::Guid>)>(&::GlobalNamespace::OVRSpaceQuery::ForAnchorsUnchecked)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa63e304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForAnchorsUnchecked", {}, {::i2c::type_of<::GlobalNamespace::OVREnumerable_1<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForAnchorsThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::StringW)>(&::GlobalNamespace::OVRSpaceQuery::ForAnchorsThrow)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa63e600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForAnchorsThrow", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> (*)(::GlobalNamespace::OVRPlugin_SpaceComponentType, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>)>(&::GlobalNamespace::OVRSpaceQuery::ForComponent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa63e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForComponent", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForComponentUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::GlobalNamespace::OVRPlugin_SpaceComponentType)>(&::GlobalNamespace::OVRSpaceQuery::ForComponentUnchecked)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa63e884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForComponentUnchecked", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForComponentThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::GlobalNamespace::OVRPlugin_SpaceComponentType, ::StringW)>(&::GlobalNamespace::OVRSpaceQuery::ForComponentThrow)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa63e978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForComponentThrow", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> (*)(::System::Guid, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpaceQuery::ForGroup)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa63eb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForGroup", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForGroupUnchecked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::System::Guid, ::GlobalNamespace::OVREnumerable_1<::System::Guid>)>(&::GlobalNamespace::OVRSpaceQuery::ForGroupUnchecked)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa63ec6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForGroupUnchecked", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::OVREnumerable_1<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ForGroupThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::System::Guid, ::StringW, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpaceQuery::ForGroupThrow)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa63eea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForGroupThrow", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ToV1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo (*)(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>)>(&::GlobalNamespace::OVRSpaceQuery::ToV1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa63f06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ToV1", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.ToV2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (*)(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>)>(&::GlobalNamespace::OVRSpaceQuery::ToV2)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa63f0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ToV2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.AppendAnchors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> (*)(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpaceQuery::AppendAnchors)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xa63e040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"AppendAnchors", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery.PostProcessQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> (*)(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>, ::GlobalNamespace::OVRPlugin_Result, ::by_ref<::StringW>)>(&::GlobalNamespace::OVRSpaceQuery::PostProcessQuery)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa63e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"PostProcessQuery", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpaceQuery::setStaticF_s_Ids(::ArrayW<::System::Guid>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Guid>, "s_Ids", ::GlobalNamespace::OVRSpaceQuery*>(std::forward<::ArrayW<::System::Guid>>(value));
}
inline ::ArrayW<::System::Guid> GlobalNamespace::OVRSpaceQuery::getStaticF_s_Ids()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Guid>, "s_Ids", ::GlobalNamespace::OVRSpaceQuery*>();
}
inline void GlobalNamespace::OVRSpaceQuery::setStaticF_s_ComponentTypes(::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>, "s_ComponentTypes", ::GlobalNamespace::OVRSpaceQuery*>(std::forward<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>>(value));
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType> GlobalNamespace::OVRSpaceQuery::getStaticF_s_ComponentTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>, "s_ComponentTypes", ::GlobalNamespace::OVRSpaceQuery*>();
}
inline void GlobalNamespace::OVRSpaceQuery::setStaticF_s_TemplateQuery(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, "s_TemplateQuery", ::GlobalNamespace::OVRSpaceQuery*>(std::forward<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(value));
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::getStaticF_s_TemplateQuery()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2, "s_TemplateQuery", ::GlobalNamespace::OVRSpaceQuery*>();
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> GlobalNamespace::OVRSpaceQuery::ForAnchors(/* [CanBeNull] */ ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForAnchors", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW>>(nullptr, ___internal_method, anchorIds, query);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForAnchorsUnchecked(::GlobalNamespace::OVREnumerable_1<::System::Guid>  anchorIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForAnchorsUnchecked", {}, {::i2c::type_of<::GlobalNamespace::OVREnumerable_1<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForAnchorsThrow(/* [NotNull] */ ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds, ::StringW  argName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForAnchorsThrow", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, anchorIds, argName);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> GlobalNamespace::OVRSpaceQuery::ForComponent(::GlobalNamespace::OVRPlugin_SpaceComponentType  type, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForComponent", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW>>(nullptr, ___internal_method, type, query);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForComponentUnchecked(::GlobalNamespace::OVRPlugin_SpaceComponentType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForComponentUnchecked", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, type);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForComponentThrow(::GlobalNamespace::OVRPlugin_SpaceComponentType  type, ::StringW  argName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForComponentThrow", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, type, argName);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> GlobalNamespace::OVRSpaceQuery::ForGroup(::System::Guid  groupUuid, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForGroup", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW>>(nullptr, ___internal_method, groupUuid, query, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForGroupUnchecked(::System::Guid  groupUuid, ::GlobalNamespace::OVREnumerable_1<::System::Guid>  anchorIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForGroupUnchecked", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::GlobalNamespace::OVREnumerable_1<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, groupUuid, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ForGroupThrow(::System::Guid  groupUuid, ::StringW  argName, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ForGroupThrow", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, groupUuid, argName, anchorIds);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo GlobalNamespace::OVRSpaceQuery::ToV1(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ToV1", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>(nullptr, ___internal_method, query2);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery::ToV2(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>  query1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"ToV2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(nullptr, ___internal_method, query1);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> GlobalNamespace::OVRSpaceQuery::AppendAnchors(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  anchorIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"AppendAnchors", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW>>(nullptr, ___internal_method, query, anchorIds);
}
inline ::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW> GlobalNamespace::OVRSpaceQuery::PostProcessQuery(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  query, ::GlobalNamespace::OVRPlugin_Result  result, /* [IsReadOnly] */ ::by_ref<::StringW>  why)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery*>(),
                        {"PostProcessQuery", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::OVRPlugin_Result,::StringW>>(nullptr, ___internal_method, query, result, why);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpaceQuery::OVRSpaceQuery()   {
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  GlobalNamespace::OVRSpaceQuery::DefaultStorageLocation{static_cast<int32_t>(0x2)};
