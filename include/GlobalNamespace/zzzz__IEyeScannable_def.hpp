#pragma once
// IWYU pragma private; include "GlobalNamespace/IEyeScannable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEyeScannable)
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
class IEyeScannable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IEyeScannable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IEyeScannable*, "", "IEyeScannable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IEyeScannable
class CORDL_TYPE IEyeScannable {
public:
// Declarations
 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

 __declspec(property(get=get_Entries)) ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>*  Entries;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_scannableId)) int32_t  scannableId;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEnable() ;

/// [CompilerGenerated]
/// @brief Method add_OnDataChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnDataChange(::System::Action*  value) ;

/// @brief Method get_Bounds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Bounds get_Bounds() ;

/// @brief Method get_Entries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IList_1<::GlobalNamespace::KeyValueStringPair>* get_Entries() ;

/// @brief Method get_Position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_scannableId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_scannableId() ;

/// [CompilerGenerated]
/// @brief Method remove_OnDataChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnDataChange(::System::Action*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IEyeScannable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEyeScannable(IEyeScannable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{184};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
