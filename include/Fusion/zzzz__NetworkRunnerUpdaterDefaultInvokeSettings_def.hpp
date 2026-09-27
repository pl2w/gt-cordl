#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerUpdaterDefaultInvokeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__UnityPlayerLoopSystemAddMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkRunnerUpdaterDefaultInvokeSettings)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
struct NetworkRunnerUpdaterDefaultInvokeSettings;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings, "Fusion", "NetworkRunnerUpdaterDefaultInvokeSettings");
// Dependencies Fusion.UnityPlayerLoopSystemAddMode
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkRunnerUpdaterDefaultInvokeSettings
struct CORDL_TYPE NetworkRunnerUpdaterDefaultInvokeSettings {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>*() ;

/// @brief Method Equals, addr 0x5fdbda8, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fdbd3c, size 0x6c, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  other) ;

/// @brief Method GetHashCode, addr 0x5fdbe24, size 0x78, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5fdbe9c, size 0xac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>"
constexpr ::System::IEquatable_1<::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings>* i___System__IEquatable_1___Fusion__NetworkRunnerUpdaterDefaultInvokeSettings_() ;

/// @brief Method op_Equality, addr 0x5fdbf48, size 0x2c, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  left, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  right) ;

/// @brief Method op_Inequality, addr 0x5fdb0b0, size 0x30, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  left, ::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerUpdaterDefaultInvokeSettings() ;

// Ctor Parameters [CppParam { name: "ReferencePlayerLoopSystem", ty: "::System::Type*", modifiers: "", def_value: None, comment: None }, CppParam { name: "AddMode", ty: "::Fusion::UnityPlayerLoopSystemAddMode", modifiers: "", def_value: None, comment: None }]
constexpr NetworkRunnerUpdaterDefaultInvokeSettings(::System::Type*  ReferencePlayerLoopSystem, ::Fusion::UnityPlayerLoopSystemAddMode  AddMode) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19272};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field ReferencePlayerLoopSystem, offset: 0x0, size: 0x8, def value: None
 ::System::Type*  ReferencePlayerLoopSystem;

/// @brief Field AddMode, offset: 0x8, size: 0x4, def value: None
 ::Fusion::UnityPlayerLoopSystemAddMode  AddMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings, ReferencePlayerLoopSystem) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings, AddMode) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunnerUpdaterDefaultInvokeSettings) == 0x10, "Size mismatch!");

} // namespace end def Fusion
