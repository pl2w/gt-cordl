#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectPriorityList.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionDataList_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectPriorityList_def.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionDataList_def.hpp"
#include "Fusion/zzzz__NetworkObjectConnectionData_def.hpp"
#include "Fusion/zzzz__NetworkObjectMeta_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectPriorityList.GetLevelList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectConnectionDataList (::Fusion::NetworkObjectPriorityList::*)(int32_t)>(&::Fusion::NetworkObjectPriorityList::GetLevelList)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fcbdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"GetLevelList", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectPriorityList.IncreasePriorities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectPriorityList::*)()>(&::Fusion::NetworkObjectPriorityList::IncreasePriorities)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5fcbe38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"IncreasePriorities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectPriorityList.SetIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectPriorityList::*)(::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectPriorityList::SetIdle)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5fcc080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"SetIdle", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectPriorityList.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectPriorityList::*)(::Fusion::NetworkObjectConnectionData*, ::Fusion::NetworkObjectMeta*)>(&::Fusion::NetworkObjectPriorityList::SetActive)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5fcc1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"SetActive", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectPriorityList.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectPriorityList::*)(::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectPriorityList::Add)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5fcc2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectPriorityList.RemoveSent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectPriorityList::*)(::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectPriorityList::RemoveSent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fcc370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"RemoveSent", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectPriorityList.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectPriorityList::*)(::Fusion::NetworkObjectConnectionData*)>(&::Fusion::NetworkObjectPriorityList::Remove)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5fcc42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectPriorityList._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectPriorityList::*)()>(&::Fusion::NetworkObjectPriorityList::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fcc504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::PlayerRef& Fusion::NetworkObjectPriorityList::__cordl_internal_get_Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr ::Fusion::PlayerRef const& Fusion::NetworkObjectPriorityList::__cordl_internal_get_Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr void Fusion::NetworkObjectPriorityList::__cordl_internal_set_Player(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Player = value;
}
constexpr ::Fusion::NetworkObjectConnectionDataList& Fusion::NetworkObjectPriorityList::__cordl_internal_get_Idle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Idle;
}
constexpr ::Fusion::NetworkObjectConnectionDataList const& Fusion::NetworkObjectPriorityList::__cordl_internal_get_Idle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Idle;
}
constexpr void Fusion::NetworkObjectPriorityList::__cordl_internal_set_Idle(::Fusion::NetworkObjectConnectionDataList  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Idle = value;
}
constexpr ::ArrayW<::Fusion::NetworkObjectConnectionDataList>& Fusion::NetworkObjectPriorityList::__cordl_internal_get_Levels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Levels;
}
constexpr ::ArrayW<::Fusion::NetworkObjectConnectionDataList> const& Fusion::NetworkObjectPriorityList::__cordl_internal_get_Levels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Levels;
}
constexpr void Fusion::NetworkObjectPriorityList::__cordl_internal_set_Levels(::ArrayW<::Fusion::NetworkObjectConnectionDataList>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Levels = value;
}
inline ::Fusion::NetworkObjectConnectionDataList Fusion::NetworkObjectPriorityList::GetLevelList(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"GetLevelList", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectConnectionDataList>(this, ___internal_method, level);
}
inline void Fusion::NetworkObjectPriorityList::IncreasePriorities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"IncreasePriorities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkObjectPriorityList::SetIdle(::Fusion::NetworkObjectConnectionData*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"SetIdle", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::NetworkObjectPriorityList::SetActive(::Fusion::NetworkObjectConnectionData*  item, ::Fusion::NetworkObjectMeta*  meta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"SetActive", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>(), ::i2c::type_of<::Fusion::NetworkObjectMeta*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, meta);
}
inline void Fusion::NetworkObjectPriorityList::Add(::Fusion::NetworkObjectConnectionData*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"Add", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::NetworkObjectPriorityList::RemoveSent(::Fusion::NetworkObjectConnectionData*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"RemoveSent", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::NetworkObjectPriorityList::Remove(::Fusion::NetworkObjectConnectionData*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {"Remove", {}, {::i2c::type_of<::Fusion::NetworkObjectConnectionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void Fusion::NetworkObjectPriorityList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectPriorityList*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectPriorityList* Fusion::NetworkObjectPriorityList::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectPriorityList*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectPriorityList::NetworkObjectPriorityList()   {
}
