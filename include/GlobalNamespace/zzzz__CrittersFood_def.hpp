#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersFood.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersFood)
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersFood;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersFood*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersFood*, "", "CrittersFood");
// Dependencies CrittersActor
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersFood
class CORDL_TYPE CrittersFood : public ::GlobalNamespace::CrittersActor {
public:
// Declarations
/// @brief Field currentFood, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFood, put=__cordl_internal_set_currentFood)) float_t  currentFood;

/// @brief Field currentSize, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSize, put=__cordl_internal_set_currentSize)) float_t  currentSize;

/// @brief Field disableWhenEmpty, offset 0x1a8, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableWhenEmpty, put=__cordl_internal_set_disableWhenEmpty)) bool  disableWhenEmpty;

/// @brief Field food, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_food, put=__cordl_internal_set_food)) ::UnityW<::UnityEngine::Transform>  food;

/// @brief Field lastFood, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFood, put=__cordl_internal_set_lastFood)) int32_t  lastFood;

/// @brief Field maxFood, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFood, put=__cordl_internal_set_maxFood)) float_t  maxFood;

/// @brief Field startingSize, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingSize, put=__cordl_internal_set_startingSize)) float_t  startingSize;

/// @brief Method AddActorDataToList, addr 0x55fed08, size 0x23c, virtual true, abstract: false, final false
inline int32_t AddActorDataToList(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  objList) ;

/// @brief Method Feed, addr 0x55fea8c, size 0x1c, virtual false, abstract: false, final false
inline void Feed(float_t  amountEaten) ;

/// @brief Method Initialize, addr 0x55fe77c, size 0x20, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::GlobalNamespace::CrittersFood* New_ctor() ;

/// @brief Method ProcessFood, addr 0x55fe994, size 0xcc, virtual false, abstract: false, final false
inline void ProcessFood() ;

/// @brief Method ProcessLocal, addr 0x55fe7dc, size 0x1b8, virtual true, abstract: false, final false
inline bool ProcessLocal() ;

/// @brief Method ProcessRemote, addr 0x55fea60, size 0x2c, virtual true, abstract: false, final false
inline void ProcessRemote() ;

/// @brief Method SendDataByCrittersActorType, addr 0x55fec04, size 0x104, virtual true, abstract: false, final false
inline void SendDataByCrittersActorType(::Photon::Pun::PhotonStream*  stream) ;

/// @brief Method SpawnData, addr 0x55fe79c, size 0x40, virtual false, abstract: false, final false
inline void SpawnData(float_t  _maxFood, float_t  _currentFood, float_t  _startingSize) ;

/// @brief Method TotalActorDataLength, addr 0x55fef44, size 0x18, virtual true, abstract: false, final false
inline int32_t TotalActorDataLength() ;

/// @brief Method UpdateFromRPC, addr 0x55fef5c, size 0x184, virtual true, abstract: false, final false
inline int32_t UpdateFromRPC(::ArrayW<::System::Object*>  data, int32_t  startingIndex) ;

/// @brief Method UpdateSpecificActor, addr 0x55feaa8, size 0x15c, virtual true, abstract: false, final false
inline bool UpdateSpecificActor(::Photon::Pun::PhotonStream*  stream) ;

constexpr float_t const& __cordl_internal_get_currentFood() const;

constexpr float_t& __cordl_internal_get_currentFood() ;

constexpr float_t const& __cordl_internal_get_currentSize() const;

constexpr float_t& __cordl_internal_get_currentSize() ;

constexpr bool const& __cordl_internal_get_disableWhenEmpty() const;

constexpr bool& __cordl_internal_get_disableWhenEmpty() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_food() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_food() ;

constexpr int32_t const& __cordl_internal_get_lastFood() const;

constexpr int32_t& __cordl_internal_get_lastFood() ;

constexpr float_t const& __cordl_internal_get_maxFood() const;

constexpr float_t& __cordl_internal_get_maxFood() ;

constexpr float_t const& __cordl_internal_get_startingSize() const;

constexpr float_t& __cordl_internal_get_startingSize() ;

constexpr void __cordl_internal_set_currentFood(float_t  value) ;

constexpr void __cordl_internal_set_currentSize(float_t  value) ;

constexpr void __cordl_internal_set_disableWhenEmpty(bool  value) ;

constexpr void __cordl_internal_set_food(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lastFood(int32_t  value) ;

constexpr void __cordl_internal_set_maxFood(float_t  value) ;

constexpr void __cordl_internal_set_startingSize(float_t  value) ;

/// @brief Method .ctor, addr 0x55ff0e0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersFood() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersFood", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersFood(CrittersFood && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersFood", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersFood(CrittersFood const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{97};

/// @brief Field maxFood, offset: 0x188, size: 0x4, def value: None
 float_t  ___maxFood;

/// @brief Field currentFood, offset: 0x18c, size: 0x4, def value: None
 float_t  ___currentFood;

/// @brief Field lastFood, offset: 0x190, size: 0x4, def value: None
 int32_t  ___lastFood;

/// @brief Field startingSize, offset: 0x194, size: 0x4, def value: None
 float_t  ___startingSize;

/// @brief Field currentSize, offset: 0x198, size: 0x4, def value: None
 float_t  ___currentSize;

/// @brief Field food, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___food;

/// @brief Field disableWhenEmpty, offset: 0x1a8, size: 0x1, def value: None
 bool  ___disableWhenEmpty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersFood, ___maxFood) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFood, ___currentFood) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFood, ___lastFood) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFood, ___startingSize) == 0x194, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFood, ___currentSize) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFood, ___food) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersFood, ___disableWhenEmpty) == 0x1a8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersFood) == 0x1b0, "Size mismatch!");

} // namespace end def GlobalNamespace
