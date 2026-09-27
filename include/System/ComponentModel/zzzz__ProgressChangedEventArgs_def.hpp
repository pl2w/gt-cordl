#pragma once
// IWYU pragma private; include "System/ComponentModel/ProgressChangedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressChangedEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ProgressChangedEventArgs;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::ProgressChangedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::ProgressChangedEventArgs*, "System.ComponentModel", "ProgressChangedEventArgs");
// Dependencies System.EventArgs
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ProgressChangedEventArgs
class CORDL_TYPE ProgressChangedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief [SRDescription("Percentage progress made in operation.")]
 __declspec(property(get=get_ProgressPercentage)) int32_t  ProgressPercentage;

/// @brief [SRDescription("User-supplied state to identify operation.")]
 __declspec(property(get=get_UserState)) ::System::Object*  UserState;

/// @brief Field progressPercentage, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressPercentage, put=__cordl_internal_set_progressPercentage)) int32_t  progressPercentage;

/// @brief Field userState, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_userState, put=__cordl_internal_set_userState)) ::System::Object*  userState;

static inline ::System::ComponentModel::ProgressChangedEventArgs* New_ctor(int32_t  progressPercentage, ::System::Object*  userState) ;

constexpr int32_t const& __cordl_internal_get_progressPercentage() const;

constexpr int32_t& __cordl_internal_get_progressPercentage() ;

constexpr ::System::Object* const& __cordl_internal_get_userState() const;

constexpr ::System::Object*& __cordl_internal_get_userState() ;

constexpr void __cordl_internal_set_progressPercentage(int32_t  value) ;

constexpr void __cordl_internal_set_userState(::System::Object*  value) ;

/// @brief Method .ctor, addr 0xad75ba4, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(int32_t  progressPercentage, ::System::Object*  userState) ;

/// @brief Method get_ProgressPercentage, addr 0xad75c20, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ProgressPercentage() ;

/// @brief Method get_UserState, addr 0xad75c28, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_UserState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressChangedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressChangedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressChangedEventArgs(ProgressChangedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressChangedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressChangedEventArgs(ProgressChangedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10274};

/// @brief Field progressPercentage, offset: 0x10, size: 0x4, def value: None
 int32_t  ___progressPercentage;

/// @brief Field userState, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___userState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::ProgressChangedEventArgs, ___progressPercentage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ProgressChangedEventArgs, ___userState) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::ProgressChangedEventArgs) == 0x20, "Size mismatch!");

} // namespace end def System::ComponentModel
