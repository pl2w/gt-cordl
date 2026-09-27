#pragma once
// IWYU pragma private; include "UnityEngine/Splines/KnotLinkCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineKnotIndex_impl.hpp"
#include "UnityEngine/Splines/zzzz__KnotLinkCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/Splines/zzzz__KnotLinkCollection_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineKnotIndex_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::KnotLinkCollection::*)()>(&::UnityEngine::Splines::KnotLinkCollection::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb31014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.GetKnotLinksInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::KnotLinkCollection_KnotLink* (::UnityEngine::Splines::KnotLinkCollection::*)(::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::KnotLinkCollection::GetKnotLinksInternal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb310164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"GetKnotLinksInternal", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.TryGetKnotLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::KnotLinkCollection::*)(::UnityEngine::Splines::SplineKnotIndex, ::by_ref<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*>)>(&::UnityEngine::Splines::KnotLinkCollection::TryGetKnotLinks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb310218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"TryGetKnotLinks", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.GetKnotLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>* (::UnityEngine::Splines::KnotLinkCollection::*)(::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::KnotLinkCollection::GetKnotLinks)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb310248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"GetKnotLinks", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)()>(&::UnityEngine::Splines::KnotLinkCollection::Clear)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb310328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.Link
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(::UnityEngine::Splines::SplineKnotIndex, ::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::KnotLinkCollection::Link)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xb310380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"Link", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.Unlink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::KnotLinkCollection::Unlink)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb31060c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"Unlink", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.SplineRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(int32_t)>(&::UnityEngine::Splines::KnotLinkCollection::SplineRemoved)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xb3106d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"SplineRemoved", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.SplineIndexChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(int32_t, int32_t)>(&::UnityEngine::Splines::KnotLinkCollection::SplineIndexChanged)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb31096c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"SplineIndexChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.KnotIndexChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::Splines::KnotLinkCollection::KnotIndexChanged)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb310a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotIndexChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.KnotIndexChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(::UnityEngine::Splines::SplineKnotIndex, ::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::KnotLinkCollection::KnotIndexChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb310aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotIndexChanged", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.KnotRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(int32_t, int32_t)>(&::UnityEngine::Splines::KnotLinkCollection::KnotRemoved)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb310b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotRemoved", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.KnotRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::KnotLinkCollection::KnotRemoved)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb310b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotRemoved", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.KnotInserted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(int32_t, int32_t)>(&::UnityEngine::Splines::KnotLinkCollection::KnotInserted)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb310cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotInserted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.KnotInserted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(::UnityEngine::Splines::SplineKnotIndex)>(&::UnityEngine::Splines::KnotLinkCollection::KnotInserted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb310b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotInserted", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection.ShiftKnotIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)(::UnityEngine::Splines::SplineKnotIndex, int32_t)>(&::UnityEngine::Splines::KnotLinkCollection::ShiftKnotIndices)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb310be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"ShiftKnotIndices", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection::*)()>(&::UnityEngine::Splines::KnotLinkCollection::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb310d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>& UnityEngine::Splines::KnotLinkCollection::__cordl_internal_get_m_KnotsLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KnotsLink;
}
constexpr ::ArrayW<::UnityEngine::Splines::KnotLinkCollection_KnotLink*> const& UnityEngine::Splines::KnotLinkCollection::__cordl_internal_get_m_KnotsLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_KnotsLink;
}
constexpr void UnityEngine::Splines::KnotLinkCollection::__cordl_internal_set_m_KnotsLink(::ArrayW<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_KnotsLink = value;
}
inline int32_t UnityEngine::Splines::KnotLinkCollection::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Splines::KnotLinkCollection_KnotLink* UnityEngine::Splines::KnotLinkCollection::GetKnotLinksInternal(::UnityEngine::Splines::SplineKnotIndex  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"GetKnotLinksInternal", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(this, ___internal_method, index);
}
inline bool UnityEngine::Splines::KnotLinkCollection::TryGetKnotLinks(::UnityEngine::Splines::SplineKnotIndex  knotIndex, ::by_ref<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*>  linkedKnots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"TryGetKnotLinks", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, knotIndex, linkedKnots);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>* UnityEngine::Splines::KnotLinkCollection::GetKnotLinks(::UnityEngine::Splines::SplineKnotIndex  knotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"GetKnotLinks", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*>(this, ___internal_method, knotIndex);
}
inline void UnityEngine::Splines::KnotLinkCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::KnotLinkCollection::Link(::UnityEngine::Splines::SplineKnotIndex  knotA, ::UnityEngine::Splines::SplineKnotIndex  knotB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"Link", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, knotA, knotB);
}
inline void UnityEngine::Splines::KnotLinkCollection::Unlink(::UnityEngine::Splines::SplineKnotIndex  knot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"Unlink", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, knot);
}
inline void UnityEngine::Splines::KnotLinkCollection::SplineRemoved(int32_t  splineIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"SplineRemoved", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, splineIndex);
}
inline void UnityEngine::Splines::KnotLinkCollection::SplineIndexChanged(int32_t  previousIndex, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"SplineIndexChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previousIndex, newIndex);
}
inline void UnityEngine::Splines::KnotLinkCollection::KnotIndexChanged(int32_t  splineIndex, int32_t  previousKnotIndex, int32_t  newKnotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotIndexChanged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, splineIndex, previousKnotIndex, newKnotIndex);
}
inline void UnityEngine::Splines::KnotLinkCollection::KnotIndexChanged(::UnityEngine::Splines::SplineKnotIndex  previousIndex, ::UnityEngine::Splines::SplineKnotIndex  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotIndexChanged", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previousIndex, newIndex);
}
inline void UnityEngine::Splines::KnotLinkCollection::KnotRemoved(int32_t  splineIndex, int32_t  knotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotRemoved", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, splineIndex, knotIndex);
}
inline void UnityEngine::Splines::KnotLinkCollection::KnotRemoved(::UnityEngine::Splines::SplineKnotIndex  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotRemoved", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::Splines::KnotLinkCollection::KnotInserted(int32_t  splineIndex, int32_t  knotIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotInserted", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, splineIndex, knotIndex);
}
inline void UnityEngine::Splines::KnotLinkCollection::KnotInserted(::UnityEngine::Splines::SplineKnotIndex  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"KnotInserted", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void UnityEngine::Splines::KnotLinkCollection::ShiftKnotIndices(::UnityEngine::Splines::SplineKnotIndex  index, int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {"ShiftKnotIndices", {}, {::i2c::type_of<::UnityEngine::Splines::SplineKnotIndex>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, offset);
}
inline void UnityEngine::Splines::KnotLinkCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::KnotLinkCollection* UnityEngine::Splines::KnotLinkCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::KnotLinkCollection*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::KnotLinkCollection::KnotLinkCollection()   {
}
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection_KnotLink.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineKnotIndex>* (::UnityEngine::Splines::KnotLinkCollection_KnotLink::*)()>(&::UnityEngine::Splines::KnotLinkCollection_KnotLink::GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb310d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection_KnotLink.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Splines::KnotLinkCollection_KnotLink::*)()>(&::UnityEngine::Splines::KnotLinkCollection_KnotLink::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb310e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection_KnotLink.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Splines::KnotLinkCollection_KnotLink::*)()>(&::UnityEngine::Splines::KnotLinkCollection_KnotLink::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb310e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection_KnotLink.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Splines::SplineKnotIndex (::UnityEngine::Splines::KnotLinkCollection_KnotLink::*)(int32_t)>(&::UnityEngine::Splines::KnotLinkCollection_KnotLink::get_Item)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb310e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::KnotLinkCollection_KnotLink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::KnotLinkCollection_KnotLink::*)()>(&::UnityEngine::Splines::KnotLinkCollection_KnotLink::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb310320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Splines::SplineKnotIndex>& UnityEngine::Splines::KnotLinkCollection_KnotLink::__cordl_internal_get_Knots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Knots;
}
constexpr ::ArrayW<::UnityEngine::Splines::SplineKnotIndex> const& UnityEngine::Splines::KnotLinkCollection_KnotLink::__cordl_internal_get_Knots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Knots;
}
constexpr void UnityEngine::Splines::KnotLinkCollection_KnotLink::__cordl_internal_set_Knots(::ArrayW<::UnityEngine::Splines::SplineKnotIndex>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Knots = value;
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineKnotIndex>* UnityEngine::Splines::KnotLinkCollection_KnotLink::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineKnotIndex>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Splines::KnotLinkCollection_KnotLink::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline int32_t UnityEngine::Splines::KnotLinkCollection_KnotLink::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineKnotIndex UnityEngine::Splines::KnotLinkCollection_KnotLink::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Splines::SplineKnotIndex>(this, ___internal_method, index);
}
inline void UnityEngine::Splines::KnotLinkCollection_KnotLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::KnotLinkCollection_KnotLink* UnityEngine::Splines::KnotLinkCollection_KnotLink::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr  UnityEngine::Splines::KnotLinkCollection_KnotLink::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>* UnityEngine::Splines::KnotLinkCollection_KnotLink::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__SplineKnotIndex_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr  UnityEngine::Splines::KnotLinkCollection_KnotLink::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>* UnityEngine::Splines::KnotLinkCollection_KnotLink::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__SplineKnotIndex_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::Splines::KnotLinkCollection_KnotLink::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::Splines::KnotLinkCollection_KnotLink::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr  UnityEngine::Splines::KnotLinkCollection_KnotLink::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>* UnityEngine::Splines::KnotLinkCollection_KnotLink::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__SplineKnotIndex_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::KnotLinkCollection_KnotLink::KnotLinkCollection_KnotLink()   {
}
