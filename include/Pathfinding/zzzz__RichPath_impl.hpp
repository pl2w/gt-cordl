#pragma once
// IWYU pragma private; include "Pathfinding/RichPath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__RichPath_def.hpp"
#include "Pathfinding/Util/zzzz__ITransform_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__RichPathPart_def.hpp"
#include "Pathfinding/zzzz__Seeker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RichPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichPath::*)()>(&::Pathfinding::RichPath::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e42a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPath.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichPath::*)()>(&::Pathfinding::RichPath::Clear)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e40328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPath.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichPath::*)(::Pathfinding::Seeker*, ::Pathfinding::Path*, bool, bool)>(&::Pathfinding::RichPath::Initialize)> {
  constexpr static std::size_t size = 0x978;
  constexpr static std::size_t addrs = 0x5e3f914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::Seeker*>(), ::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPath.get_Endpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RichPath::*)()>(&::Pathfinding::RichPath::get_Endpoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e437c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"get_Endpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPath.set_Endpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichPath::*)(::UnityEngine::Vector3)>(&::Pathfinding::RichPath::set_Endpoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e437cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"set_Endpoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPath.get_CompletedAllParts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichPath::*)()>(&::Pathfinding::RichPath::get_CompletedAllParts)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e403a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"get_CompletedAllParts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPath.get_IsLastPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichPath::*)()>(&::Pathfinding::RichPath::get_IsLastPart)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3f1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"get_IsLastPart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPath.NextPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichPath::*)()>(&::Pathfinding::RichPath::NextPart)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e403f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"NextPart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPath.GetCurrentPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RichPathPart* (::Pathfinding::RichPath::*)()>(&::Pathfinding::RichPath::GetCurrentPart)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e3f06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"GetCurrentPart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichPath.GetRemainingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichPath::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::by_ref<bool>)>(&::Pathfinding::RichPath::GetRemainingPath)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5e40474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::RichPath::__cordl_internal_get_currentPart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPart;
}
constexpr int32_t const& Pathfinding::RichPath::__cordl_internal_get_currentPart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPart;
}
constexpr void Pathfinding::RichPath::__cordl_internal_set_currentPart(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPart = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RichPathPart*>*& Pathfinding::RichPath::__cordl_internal_get_parts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parts;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RichPathPart*>* const& Pathfinding::RichPath::__cordl_internal_get_parts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parts;
}
constexpr void Pathfinding::RichPath::__cordl_internal_set_parts(::System::Collections::Generic::List_1<::Pathfinding::RichPathPart*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parts = value;
}
constexpr ::UnityW<::Pathfinding::Seeker>& Pathfinding::RichPath::__cordl_internal_get_seeker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr ::UnityW<::Pathfinding::Seeker> const& Pathfinding::RichPath::__cordl_internal_get_seeker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr void Pathfinding::RichPath::__cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seeker = value;
}
constexpr ::Pathfinding::Util::ITransform*& Pathfinding::RichPath::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::Pathfinding::Util::ITransform* const& Pathfinding::RichPath::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void Pathfinding::RichPath::__cordl_internal_set_transform(::Pathfinding::Util::ITransform*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transform = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RichPath::__cordl_internal_get__Endpoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Endpoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RichPath::__cordl_internal_get__Endpoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Endpoint_k__BackingField;
}
constexpr void Pathfinding::RichPath::__cordl_internal_set__Endpoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Endpoint_k__BackingField = value;
}
inline void Pathfinding::RichPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RichPath::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RichPath::Initialize(::Pathfinding::Seeker*  seeker, ::Pathfinding::Path*  path, bool  mergePartEndpoints, bool  simplificationMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"Initialize", {}, {::i2c::type_of<::Pathfinding::Seeker*>(), ::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seeker, path, mergePartEndpoints, simplificationMode);
}
inline ::UnityEngine::Vector3 Pathfinding::RichPath::get_Endpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"get_Endpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::RichPath::set_Endpoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"set_Endpoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::RichPath::get_CompletedAllParts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"get_CompletedAllParts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RichPath::get_IsLastPart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"get_IsLastPart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RichPath::NextPart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"NextPart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RichPathPart* Pathfinding::RichPath::GetCurrentPart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"GetCurrentPart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RichPathPart*>(this, ___internal_method);
}
inline void Pathfinding::RichPath::GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, ::UnityEngine::Vector3  currentPosition, ::by_ref<bool>  requiresRepath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichPath*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, currentPosition, requiresRepath);
}
inline ::Pathfinding::RichPath* Pathfinding::RichPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RichPath*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RichPath::RichPath()   {
}
