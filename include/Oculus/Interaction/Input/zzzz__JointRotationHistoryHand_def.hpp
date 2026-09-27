#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/JointRotationHistoryHand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Hand_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JointRotationHistoryHand)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
template<typename TData>
class DataModifier_1;
}
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class JointRotationHistoryHand;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::JointRotationHistoryHand*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::JointRotationHistoryHand*, "Oculus.Interaction.Input", "JointRotationHistoryHand");
// Dependencies Oculus.Interaction.Input.Hand, UnityEngine.Quaternion
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.JointRotationHistoryHand
class CORDL_TYPE JointRotationHistoryHand : public ::Oculus::Interaction::Input::Hand {
public:
// Declarations
/// @brief Field _capturedDataVersion, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__capturedDataVersion, put=__cordl_internal_set__capturedDataVersion)) int32_t  _capturedDataVersion;

/// @brief Field _historyIndex, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__historyIndex, put=__cordl_internal_set__historyIndex)) int32_t  _historyIndex;

/// @brief Field _historyLength, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__historyLength, put=__cordl_internal_set__historyLength)) int32_t  _historyLength;

/// @brief Field _historyOffset, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__historyOffset, put=__cordl_internal_set__historyOffset)) int32_t  _historyOffset;

/// @brief Field _jointHistory, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointHistory, put=__cordl_internal_set__jointHistory)) ::ArrayW<::ArrayW<::UnityEngine::Quaternion>>  _jointHistory;

/// @brief Method Apply, addr 0xa508300, size 0x274, virtual true, abstract: false, final false
inline void Apply(::Oculus::Interaction::Input::HandDataAsset*  data) ;

/// @brief Method InjectAllJointHistoryHand, addr 0xa508590, size 0x38, virtual false, abstract: false, final false
inline void InjectAllJointHistoryHand(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HandDataAsset*>*  modifyDataFromSource, bool  applyModifier, int32_t  historyLength, int32_t  historyOffset) ;

/// @brief Method InjectHistoryLength, addr 0xa5085c8, size 0x8, virtual false, abstract: false, final false
inline void InjectHistoryLength(int32_t  historyLength) ;

static inline ::Oculus::Interaction::Input::JointRotationHistoryHand* New_ctor() ;

/// @brief Method SetHistoryOffset, addr 0xa508574, size 0x1c, virtual false, abstract: false, final false
inline void SetHistoryOffset(int32_t  offset) ;

/// @brief Method Start, addr 0xa5081b0, size 0x150, virtual true, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get__capturedDataVersion() const;

constexpr int32_t& __cordl_internal_get__capturedDataVersion() ;

constexpr int32_t const& __cordl_internal_get__historyIndex() const;

constexpr int32_t& __cordl_internal_get__historyIndex() ;

constexpr int32_t const& __cordl_internal_get__historyLength() const;

constexpr int32_t& __cordl_internal_get__historyLength() ;

constexpr int32_t const& __cordl_internal_get__historyOffset() const;

constexpr int32_t& __cordl_internal_get__historyOffset() ;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Quaternion>> const& __cordl_internal_get__jointHistory() const;

constexpr ::ArrayW<::ArrayW<::UnityEngine::Quaternion>>& __cordl_internal_get__jointHistory() ;

constexpr void __cordl_internal_set__capturedDataVersion(int32_t  value) ;

constexpr void __cordl_internal_set__historyIndex(int32_t  value) ;

constexpr void __cordl_internal_set__historyLength(int32_t  value) ;

constexpr void __cordl_internal_set__historyOffset(int32_t  value) ;

constexpr void __cordl_internal_set__jointHistory(::ArrayW<::ArrayW<::UnityEngine::Quaternion>>  value) ;

/// @brief Method .ctor, addr 0xa5085d0, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JointRotationHistoryHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JointRotationHistoryHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JointRotationHistoryHand(JointRotationHistoryHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JointRotationHistoryHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JointRotationHistoryHand(JointRotationHistoryHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16475};

/// [SerializeField]
/// @brief Field _historyLength, offset: 0x80, size: 0x4, def value: None
 int32_t  ____historyLength;

/// [SerializeField]
/// @brief Field _historyOffset, offset: 0x84, size: 0x4, def value: None
 int32_t  ____historyOffset;

/// @brief Field _jointHistory, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::UnityEngine::Quaternion>>  ____jointHistory;

/// @brief Field _historyIndex, offset: 0x90, size: 0x4, def value: None
 int32_t  ____historyIndex;

/// @brief Field _capturedDataVersion, offset: 0x94, size: 0x4, def value: None
 int32_t  ____capturedDataVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::JointRotationHistoryHand, ____historyLength) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::JointRotationHistoryHand, ____historyOffset) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::JointRotationHistoryHand, ____jointHistory) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::JointRotationHistoryHand, ____historyIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::JointRotationHistoryHand, ____capturedDataVersion) == 0x94, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::JointRotationHistoryHand) == 0x98, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
