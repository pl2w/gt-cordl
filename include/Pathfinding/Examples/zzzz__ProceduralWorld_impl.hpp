#pragma once
// IWYU pragma private; include "Pathfinding/Examples/ProceduralWorld.hpp"
#include "Pathfinding/Examples/zzzz__ProceduralWorld_RotationRandomness_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Pathfinding/Examples/zzzz__ProceduralWorld_def.hpp"
#include "Pathfinding/Examples/zzzz__ProceduralWorld_RotationRandomness_def.hpp"
#include "Pathfinding/Examples/zzzz__ProceduralWorld_def.hpp"
#include "Pathfinding/zzzz__Int2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld::*)()>(&::Pathfinding::Examples::ProceduralWorld::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5ef276c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld::*)()>(&::Pathfinding::Examples::ProceduralWorld::Update)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x5ef27f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld.GenerateTiles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Examples::ProceduralWorld::*)()>(&::Pathfinding::Examples::ProceduralWorld::GenerateTiles)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ef2e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld*>(),
                        {"GenerateTiles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld::*)()>(&::Pathfinding::Examples::ProceduralWorld::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5ef32ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Pathfinding::Examples::ProceduralWorld::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr ::ArrayW<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_prefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabs;
}
constexpr ::ArrayW<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*> const& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_prefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabs;
}
constexpr void Pathfinding::Examples::ProceduralWorld::__cordl_internal_set_prefabs(::ArrayW<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabs = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_range()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_range() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___range;
}
constexpr void Pathfinding::Examples::ProceduralWorld::__cordl_internal_set_range(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___range = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_disableAsyncLoadWithinRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableAsyncLoadWithinRange;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_disableAsyncLoadWithinRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableAsyncLoadWithinRange;
}
constexpr void Pathfinding::Examples::ProceduralWorld::__cordl_internal_set_disableAsyncLoadWithinRange(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableAsyncLoadWithinRange = value;
}
constexpr float_t& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_tileSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSize;
}
constexpr float_t const& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_tileSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileSize;
}
constexpr void Pathfinding::Examples::ProceduralWorld::__cordl_internal_set_tileSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileSize = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_subTiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subTiles;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_subTiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subTiles;
}
constexpr void Pathfinding::Examples::ProceduralWorld::__cordl_internal_set_subTiles(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subTiles = value;
}
constexpr bool& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_staticBatching()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticBatching;
}
constexpr bool const& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_staticBatching() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staticBatching;
}
constexpr void Pathfinding::Examples::ProceduralWorld::__cordl_internal_set_staticBatching(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staticBatching = value;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_tileGenerationQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileGenerationQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>* const& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_tileGenerationQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tileGenerationQueue;
}
constexpr void Pathfinding::Examples::ProceduralWorld::__cordl_internal_set_tileGenerationQueue(::System::Collections::Generic::Queue_1<::System::Collections::IEnumerator*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tileGenerationQueue = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>*& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_tiles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiles;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>* const& Pathfinding::Examples::ProceduralWorld::__cordl_internal_get_tiles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tiles;
}
constexpr void Pathfinding::Examples::ProceduralWorld::__cordl_internal_set_tiles(::System::Collections::Generic::Dictionary_2<::Pathfinding::Int2,::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tiles = value;
}
inline void Pathfinding::Examples::ProceduralWorld::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::ProceduralWorld::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::ProceduralWorld::GenerateTiles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld*>(),
                        {"GenerateTiles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Pathfinding::Examples::ProceduralWorld::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::ProceduralWorld* Pathfinding::Examples::ProceduralWorld::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ProceduralWorld*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ProceduralWorld::ProceduralWorld()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::*)(int32_t)>(&::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ef3284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::*)()>(&::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef428c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::*)()>(&::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ef4290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::*)()>(&::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef4378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::*)()>(&::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ef4380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::*)()>(&::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef43b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Pathfinding::Examples::ProceduralWorld>& Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::Examples::ProceduralWorld> const& Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::__cordl_internal_set___4__this(::UnityW<::Pathfinding::Examples::ProceduralWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13* Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ProceduralWorld__GenerateTiles_d__13::ProceduralWorld__GenerateTiles_d__13()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile.get_destroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)()>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::get_destroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef3404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"get_destroyed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile.set_destroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)(bool)>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::set_destroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef340c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"set_destroyed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)(::Pathfinding::Examples::ProceduralWorld*, int32_t, int32_t)>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ef3068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Examples::ProceduralWorld*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile.Generate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)()>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::Generate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ef3118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"Generate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile.ForceFinish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)()>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::ForceFinish)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5ef3184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"ForceFinish", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile.RandomInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)()>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::RandomInside)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5ef343c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"RandomInside", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile.RandomInside
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)(float_t, float_t)>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::RandomInside)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5ef34d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"RandomInside", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile.RandomYRot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*)>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::RandomYRot)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ef3578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"RandomYRot", {}, {::i2c::type_of<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile.InternalGenerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)()>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::InternalGenerate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ef3654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"InternalGenerate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralTile.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld_ProceduralTile::*)()>(&::Pathfinding::Examples::ProceduralWorld_ProceduralTile::Destroy)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5ef2f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_x()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_x() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___x;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_set_x(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___x = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_z()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_z() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___z;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_set_z(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___z = value;
}
constexpr ::System::Random*& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_rnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnd;
}
constexpr ::System::Random* const& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_rnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rnd;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_set_rnd(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rnd = value;
}
constexpr ::UnityW<::Pathfinding::Examples::ProceduralWorld>& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_world()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___world;
}
constexpr ::UnityW<::Pathfinding::Examples::ProceduralWorld> const& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_world() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___world;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_set_world(::UnityW<::Pathfinding::Examples::ProceduralWorld>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___world = value;
}
constexpr bool& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get__destroyed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destroyed_k__BackingField;
}
constexpr bool const& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get__destroyed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destroyed_k__BackingField;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_set__destroyed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destroyed_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___root;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___root = value;
}
constexpr ::System::Collections::IEnumerator*& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_ie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ie;
}
constexpr ::System::Collections::IEnumerator* const& Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_get_ie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ie;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralTile::__cordl_internal_set_ie(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ie = value;
}
inline bool Pathfinding::Examples::ProceduralWorld_ProceduralTile::get_destroyed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"get_destroyed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Examples::ProceduralWorld_ProceduralTile::set_destroyed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"set_destroyed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::Examples::ProceduralWorld_ProceduralTile::_ctor(::Pathfinding::Examples::ProceduralWorld*  world, int32_t  x, int32_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::Examples::ProceduralWorld*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, world, x, z);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::ProceduralWorld_ProceduralTile::Generate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"Generate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Pathfinding::Examples::ProceduralWorld_ProceduralTile::ForceFinish()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"ForceFinish", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::Examples::ProceduralWorld_ProceduralTile::RandomInside()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"RandomInside", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::Examples::ProceduralWorld_ProceduralTile::RandomInside(float_t  px, float_t  pz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"RandomInside", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, px, pz);
}
inline ::UnityEngine::Quaternion Pathfinding::Examples::ProceduralWorld_ProceduralTile::RandomYRot(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"RandomYRot", {}, {::i2c::type_of<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, prefab);
}
inline ::System::Collections::IEnumerator* Pathfinding::Examples::ProceduralWorld_ProceduralTile::InternalGenerate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"InternalGenerate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Pathfinding::Examples::ProceduralWorld_ProceduralTile::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::ProceduralWorld_ProceduralTile* Pathfinding::Examples::ProceduralWorld_ProceduralTile::New_ctor(::Pathfinding::Examples::ProceduralWorld*  world, int32_t  x, int32_t  z)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ProceduralWorld_ProceduralTile*>(world, x, z));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralTile::ProceduralWorld_ProceduralTile()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::*)(int32_t)>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ef36c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef39c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x880;
  constexpr static std::size_t addrs = 0x5ef39c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef4244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ef424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef4284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralTile*& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralTile* const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set___4__this(::Pathfinding::Examples::ProceduralWorld_ProceduralTile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__counter_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counter_5__2;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__counter_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counter_5__2;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__counter_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____counter_5__2 = value;
}
constexpr ::System::Object*& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__ditherMap_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ditherMap_5__3;
}
constexpr ::System::Object* const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__ditherMap_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ditherMap_5__3;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__ditherMap_5__3(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ditherMap_5__3 = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__i_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__i_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__i_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__4 = value;
}
constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__pref_5__5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pref_5__5;
}
constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab* const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__pref_5__5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pref_5__5;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__pref_5__5(::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pref_5__5 = value;
}
constexpr float_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__subSize_5__6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subSize_5__6;
}
constexpr float_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__subSize_5__6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subSize_5__6;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__subSize_5__6(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subSize_5__6 = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__sx_5__7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sx_5__7;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__sx_5__7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sx_5__7;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__sx_5__7(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sx_5__7 = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__sz_5__8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sz_5__8;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__sz_5__8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sz_5__8;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__sz_5__8(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sz_5__8 = value;
}
constexpr float_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__px_5__9()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____px_5__9;
}
constexpr float_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__px_5__9() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____px_5__9;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__px_5__9(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____px_5__9 = value;
}
constexpr float_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__pz_5__10()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pz_5__10;
}
constexpr float_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__pz_5__10() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pz_5__10;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__pz_5__10(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pz_5__10 = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__count_5__11()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count_5__11;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__count_5__11() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count_5__11;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__count_5__11(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count_5__11 = value;
}
constexpr int32_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__j_5__12()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____j_5__12;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_get__j_5__12() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____j_5__12;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::__cordl_internal_set__j_5__12(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____j_5__12 = value;
}
inline void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16* Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__InternalGenerate_d__16::ProceduralTile_ProceduralWorld__InternalGenerate_d__16()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::*)(int32_t)>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5ef3414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef36e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5ef36ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef3978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ef3980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::*)()>(&::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef39b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralTile*& Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralTile* const& Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::__cordl_internal_set___4__this(::Pathfinding::Examples::ProceduralWorld_ProceduralTile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11* Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ProceduralTile_ProceduralWorld__Generate_d__11::ProceduralTile_ProceduralWorld__Generate_d__11()   {
}
//  Writing Method size for method: ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::*)()>(&::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ef339c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr float_t& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_density()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr float_t const& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_density() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___density;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_set_density(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___density = value;
}
constexpr float_t& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_perlin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlin;
}
constexpr float_t const& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_perlin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlin;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_set_perlin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlin = value;
}
constexpr float_t& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_perlinPower()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinPower;
}
constexpr float_t const& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_perlinPower() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinPower;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_set_perlinPower(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinPower = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_perlinOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinOffset;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_perlinOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinOffset;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_set_perlinOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinOffset = value;
}
constexpr float_t& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_perlinScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinScale;
}
constexpr float_t const& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_perlinScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perlinScale;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_set_perlinScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perlinScale = value;
}
constexpr float_t& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_random()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr float_t const& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_random() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___random;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_set_random(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___random = value;
}
constexpr ::GlobalNamespace::ProceduralWorld_RotationRandomness& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_randomRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomRotation;
}
constexpr ::GlobalNamespace::ProceduralWorld_RotationRandomness const& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_randomRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomRotation;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_set_randomRotation(::GlobalNamespace::ProceduralWorld_RotationRandomness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomRotation = value;
}
constexpr bool& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_singleFixed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleFixed;
}
constexpr bool const& Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_get_singleFixed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___singleFixed;
}
constexpr void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::__cordl_internal_set_singleFixed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___singleFixed = value;
}
inline void Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab* Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::ProceduralWorld_ProceduralPrefab::ProceduralWorld_ProceduralPrefab()   {
}
