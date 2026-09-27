#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpaceQuery_Options.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryActionType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceQuery_Options_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryActionType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryInfo_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceQueryType_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_StorageLocation_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_MaxResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_MaxResults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_MaxResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(int32_t)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_MaxResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_MaxResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_Timeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_Timeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(double_t)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_Timeout", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_Location
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRSpace_StorageLocation (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_Location", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_Location
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRSpace_StorageLocation)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_Location)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_Location", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_QueryType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryType (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_QueryType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_QueryType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRPlugin_SpaceQueryType)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_QueryType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_QueryType", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_ActionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryActionType (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_ActionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_ActionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRPlugin_SpaceQueryActionType)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_ActionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_ActionType", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryActionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_ComponentFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_ComponentFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_ComponentFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_ComponentFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::GlobalNamespace::OVRPlugin_SpaceComponentType)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_ComponentFilter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa63f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_ComponentFilter", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_UuidFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Guid>* (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_UuidFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa63f3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_UuidFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_UuidFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_UuidFilter)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa63f3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_UuidFilter", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.get_GroupFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Guid> (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::get_GroupFilter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa63f5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_GroupFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.set_GroupFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpaceQuery_Options::*)(::System::Nullable_1<::System::Guid>)>(&::GlobalNamespace::OVRSpaceQuery_Options::set_GroupFilter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa63f5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_GroupFilter", {}, {::i2c::type_of<::System::Nullable_1<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.ToQueryInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa63f624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"ToQueryInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.ToQueryInfo2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 (::GlobalNamespace::OVRSpaceQuery_Options::*)()>(&::GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo2)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa63f810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"ToQueryInfo2", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.TryQuerySpaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSpaceQuery_Options::*)(::by_ref<uint64_t>)>(&::GlobalNamespace::OVRSpaceQuery_Options::TryQuerySpaces)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa63fa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"TryQuerySpaces", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpaceQuery_Options.ValidateSingleFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::GlobalNamespace::OVRPlugin_SpaceComponentType, ::System::Nullable_1<::System::Guid>)>(&::GlobalNamespace::OVRSpaceQuery_Options::ValidateSingleFilter)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa63f324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"ValidateSingleFilter", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Nullable_1<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::OVRSpaceQuery_Options::get_MaxResults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_MaxResults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_MaxResults(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_MaxResults", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t GlobalNamespace::OVRSpaceQuery_Options::get_Timeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_Timeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_Timeout(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_Timeout", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpace_StorageLocation GlobalNamespace::OVRSpaceQuery_Options::get_Location()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_Location", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpace_StorageLocation>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_Location(::GlobalNamespace::OVRSpace_StorageLocation  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_Location", {}, {::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryType GlobalNamespace::OVRSpaceQuery_Options::get_QueryType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_QueryType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryType>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_QueryType(::GlobalNamespace::OVRPlugin_SpaceQueryType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_QueryType", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryActionType GlobalNamespace::OVRSpaceQuery_Options::get_ActionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_ActionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryActionType>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_ActionType(::GlobalNamespace::OVRPlugin_SpaceQueryActionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_ActionType", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryActionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRSpaceQuery_Options::get_ComponentFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_ComponentFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceComponentType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_ComponentFilter", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Guid>* GlobalNamespace::OVRSpaceQuery_Options::get_UuidFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_UuidFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_UuidFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_UuidFilter", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Nullable_1<::System::Guid> GlobalNamespace::OVRSpaceQuery_Options::get_GroupFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"get_GroupFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Guid>>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::set_GroupFilter(::System::Nullable_1<::System::Guid>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"set_GroupFilter", {}, {::i2c::type_of<::System::Nullable_1<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"ToQueryInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 GlobalNamespace::OVRSpaceQuery_Options::ToQueryInfo2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"ToQueryInfo2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRSpaceQuery_Options::TryQuerySpaces(::by_ref<uint64_t>  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"TryQuerySpaces", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, requestId);
}
inline void GlobalNamespace::OVRSpaceQuery_Options::ValidateSingleFilter(::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuidFilter, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentFilter, ::System::Nullable_1<::System::Guid>  groupFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpaceQuery_Options>(),
                        {"ValidateSingleFilter", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Nullable_1<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, uuidFilter, componentFilter, groupFilter);
}
// Ctor Parameters [CppParam { name: "_MaxResults_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Timeout_k__BackingField", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Location_k__BackingField", ty: "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_QueryType_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ActionType_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_SpaceQueryActionType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_componentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_uuidFilter", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_groupFilter", ty: "::System::Nullable_1<::System::Guid>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSpaceQuery_Options::OVRSpaceQuery_Options(int32_t  _MaxResults_k__BackingField, double_t  _Timeout_k__BackingField, ::GlobalNamespace::OVRSpace_StorageLocation  _Location_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceQueryType  _QueryType_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceQueryActionType  _ActionType_k__BackingField, ::GlobalNamespace::OVRPlugin_SpaceComponentType  _componentType, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  _uuidFilter, ::System::Nullable_1<::System::Guid>  _groupFilter) noexcept  {
this->_MaxResults_k__BackingField = _MaxResults_k__BackingField;
this->_Timeout_k__BackingField = _Timeout_k__BackingField;
this->_Location_k__BackingField = _Location_k__BackingField;
this->_QueryType_k__BackingField = _QueryType_k__BackingField;
this->_ActionType_k__BackingField = _ActionType_k__BackingField;
this->_componentType = _componentType;
this->_uuidFilter = _uuidFilter;
this->_groupFilter = _groupFilter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpaceQuery_Options::OVRSpaceQuery_Options()   {
}
