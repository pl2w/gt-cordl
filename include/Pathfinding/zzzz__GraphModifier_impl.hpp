#pragma once
// IWYU pragma private; include "Pathfinding/GraphModifier.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "Pathfinding/zzzz__GraphModifier_def.hpp"
#include "Pathfinding/zzzz__GraphModifier_EventType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphModifier.FindAllModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Pathfinding::GraphModifier::FindAllModifiers)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e574b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"FindAllModifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.TriggerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GraphModifier_EventType)>(&::Pathfinding::GraphModifier::TriggerEvent)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5e575e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"TriggerEvent", {}, {::i2c::type_of<::GlobalNamespace::GraphModifier_EventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e57898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e57cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::Awake)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e57cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.ConfigureUniqueID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::ConfigureUniqueID)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e57b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"ConfigureUniqueID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.AddToLinkedList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::AddToLinkedList)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5e57a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"AddToLinkedList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.RemoveFromLinkedList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::RemoveFromLinkedList)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5e578b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"RemoveFromLinkedList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::OnDestroy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e57cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.OnPostScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::OnPostScan)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e57d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.OnPreScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::OnPreScan)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e57d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.OnLatePostScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::OnLatePostScan)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e57d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.OnPostCacheLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::OnPostCacheLoad)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e57d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.OnGraphsPreUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::OnGraphsPreUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e57d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.OnGraphsPostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::OnGraphsPostUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e57d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::Reset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e57d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {::i2c::class_of<::Pathfinding::GraphModifier*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphModifier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphModifier::*)()>(&::Pathfinding::GraphModifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e57e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::GraphModifier>& Pathfinding::GraphModifier::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr ::UnityW<::Pathfinding::GraphModifier> const& Pathfinding::GraphModifier::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
constexpr void Pathfinding::GraphModifier::__cordl_internal_set_prev(::UnityW<::Pathfinding::GraphModifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
constexpr ::UnityW<::Pathfinding::GraphModifier>& Pathfinding::GraphModifier::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::UnityW<::Pathfinding::GraphModifier> const& Pathfinding::GraphModifier::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Pathfinding::GraphModifier::__cordl_internal_set_next(::UnityW<::Pathfinding::GraphModifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr uint64_t& Pathfinding::GraphModifier::__cordl_internal_get_uniqueID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueID;
}
constexpr uint64_t const& Pathfinding::GraphModifier::__cordl_internal_get_uniqueID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uniqueID;
}
constexpr void Pathfinding::GraphModifier::__cordl_internal_set_uniqueID(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uniqueID = value;
}
inline void Pathfinding::GraphModifier::setStaticF_root(::UnityW<::Pathfinding::GraphModifier>  value)  {
::cordl_internals::setStaticField<::UnityW<::Pathfinding::GraphModifier>, "root", ::Pathfinding::GraphModifier*>(std::forward<::UnityW<::Pathfinding::GraphModifier>>(value));
}
inline ::UnityW<::Pathfinding::GraphModifier> Pathfinding::GraphModifier::getStaticF_root()  {
return ::cordl_internals::getStaticField<::UnityW<::Pathfinding::GraphModifier>, "root", ::Pathfinding::GraphModifier*>();
}
inline void Pathfinding::GraphModifier::setStaticF_usedIDs(::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Pathfinding::GraphModifier>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Pathfinding::GraphModifier>>*, "usedIDs", ::Pathfinding::GraphModifier*>(std::forward<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Pathfinding::GraphModifier>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Pathfinding::GraphModifier>>* Pathfinding::GraphModifier::getStaticF_usedIDs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint64_t,::UnityW<::Pathfinding::GraphModifier>>*, "usedIDs", ::Pathfinding::GraphModifier*>();
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Pathfinding::GraphModifier::GetModifiersOfType()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                    {"GetModifiersOfType", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method);
}
inline void Pathfinding::GraphModifier::FindAllModifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"FindAllModifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Pathfinding::GraphModifier::TriggerEvent(::GlobalNamespace::GraphModifier_EventType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"TriggerEvent", {}, {::i2c::type_of<::GlobalNamespace::GraphModifier_EventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline void Pathfinding::GraphModifier::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::ConfigureUniqueID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"ConfigureUniqueID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::AddToLinkedList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"AddToLinkedList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::RemoveFromLinkedList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {"RemoveFromLinkedList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::OnPostScan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::OnPreScan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::OnLatePostScan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::OnPostCacheLoad()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::OnGraphsPreUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::OnGraphsPostUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::GraphModifier*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::GraphModifier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphModifier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::GraphModifier* Pathfinding::GraphModifier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphModifier*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphModifier::GraphModifier()   {
}
