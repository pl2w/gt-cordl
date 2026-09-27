#pragma once
// IWYU pragma private; include "GlobalNamespace/EyeScannableMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EyeScannableMono)
namespace GlobalNamespace {
struct EyeScannableMono__RecalculateBoundsLater_d__17;
}
namespace GlobalNamespace {
class IEyeScannable;
}
namespace GlobalNamespace {
class KeyValuePairSet;
}
namespace GlobalNamespace {
struct KeyValueStringPair;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class EyeScannableMono;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EyeScannableMono*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EyeScannableMono*, "", "EyeScannableMono");
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: EyeScannableMono
class CORDL_TYPE EyeScannableMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _RecalculateBoundsLater_d__17 = ::GlobalNamespace::EyeScannableMono__RecalculateBoundsLater_d__17;

 __declspec(property(get=IEyeScannable_get_Bounds)) ::UnityEngine::Bounds  IEyeScannable_Bounds;

 __declspec(property(get=IEyeScannable_get_Entries)) ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*  IEyeScannable_Entries;

 __declspec(property(get=IEyeScannable_get_Position)) ::UnityEngine::Vector3  IEyeScannable_Position;

 __declspec(property(get=IEyeScannable_get_scannableId)) int32_t  IEyeScannable_scannableId;

/// @brief Field OnDataChange, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDataChange, put=__cordl_internal_set_OnDataChange)) ::System::Action*  OnDataChange;

/// @brief Field _bounds, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get__bounds, put=__cordl_internal_set__bounds)) ::UnityEngine::Bounds  _bounds;

/// @brief Field _initialPosition, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__initialPosition, put=__cordl_internal_set__initialPosition)) ::UnityEngine::Vector3  _initialPosition;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::UnityW<::GlobalNamespace::KeyValuePairSet>  data;

/// @brief Convert operator to "::GlobalNamespace::IEyeScannable"
constexpr operator  ::GlobalNamespace::IEyeScannable*() noexcept;

/// @brief Method Awake, addr 0x57ede94, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method IEyeScannable.get_Bounds, addr 0x57ede68, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Bounds IEyeScannable_get_Bounds() ;

/// @brief Method IEyeScannable.get_Entries, addr 0x57ede7c, size 0x18, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* IEyeScannable_get_Entries() ;

/// @brief Method IEyeScannable.get_Position, addr 0x57ede18, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 IEyeScannable_get_Position() ;

/// @brief Method IEyeScannable.get_scannableId, addr 0x57ede10, size 0x8, virtual true, abstract: false, final true
inline int32_t IEyeScannable_get_scannableId() ;

static inline ::GlobalNamespace::EyeScannableMono* New_ctor() ;

/// @brief Method OnDisable, addr 0x57ee360, size 0x54, virtual true, abstract: false, final true
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57ee0c4, size 0x5c, virtual true, abstract: false, final true
inline void OnEnable() ;

/// @brief Method RecalculateBounds, addr 0x57ede98, size 0x22c, virtual false, abstract: false, final false
inline void RecalculateBounds() ;

/// [AsyncStateMachine(typeof(EyeScannableMono::<RecalculateBoundsLater>d__17))]
/// @brief Method RecalculateBoundsLater, addr 0x57ee120, size 0xa8, virtual false, abstract: false, final false
inline void RecalculateBoundsLater() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDataChange() const;

constexpr ::System::Action*& __cordl_internal_get_OnDataChange() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get__bounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get__bounds() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialPosition() ;

constexpr ::UnityW<::GlobalNamespace::KeyValuePairSet> const& __cordl_internal_get_data() const;

constexpr ::UnityW<::GlobalNamespace::KeyValuePairSet>& __cordl_internal_get_data() ;

constexpr void __cordl_internal_set_OnDataChange(::System::Action*  value) ;

constexpr void __cordl_internal_set__bounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set__initialPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_data(::UnityW<::GlobalNamespace::KeyValuePairSet>  value) ;

/// @brief Method .ctor, addr 0x57ee4f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnDataChange, addr 0x57edcd8, size 0x9c, virtual true, abstract: false, final true
inline void add_OnDataChange(::System::Action*  value) ;

/// @brief Convert to "::GlobalNamespace::IEyeScannable"
constexpr ::GlobalNamespace::IEyeScannable* i___GlobalNamespace__IEyeScannable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnDataChange, addr 0x57edd74, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnDataChange(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EyeScannableMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EyeScannableMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EyeScannableMono(EyeScannableMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EyeScannableMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EyeScannableMono(EyeScannableMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{182};

/// [CompilerGenerated]
/// @brief Field OnDataChange, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnDataChange;

/// [SerializeField]
/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KeyValuePairSet>  ___data;

/// @brief Field _bounds, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::Bounds  ____bounds;

/// @brief Field _initialPosition, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____initialPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EyeScannableMono, ___OnDataChange) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannableMono, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannableMono, ____bounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EyeScannableMono, ____initialPosition) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EyeScannableMono) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
