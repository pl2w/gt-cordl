#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/MachineAttributeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MachineAttributeProvider)
namespace Backtrace::Unity::Model::Attributes {
class IScopeAttributeProvider;
}
namespace Backtrace::Unity::Model {
class MachineIdStorage;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Attributes {
class MachineAttributeProvider;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Attributes::MachineAttributeProvider*, "Backtrace.Unity.Model.Attributes", "MachineAttributeProvider");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Attributes {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Attributes.MachineAttributeProvider
class CORDL_TYPE MachineAttributeProvider : public ::System::Object {
public:
// Declarations
/// @brief Field _machineIdStorage, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__machineIdStorage, put=__cordl_internal_set__machineIdStorage)) ::Backtrace::Unity::Model::MachineIdStorage*  _machineIdStorage;

/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr operator  ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider*() noexcept;

/// @brief Method GetAttributes, addr 0x5f20750, size 0xf0, virtual true, abstract: false, final true
inline void GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method IncludeGraphicCardInformation, addr 0x5f20840, size 0x6e8, virtual false, abstract: false, final false
inline void IncludeGraphicCardInformation(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

/// @brief Method IncludeOsInformation, addr 0x5f20f28, size 0xf24, virtual false, abstract: false, final false
inline void IncludeOsInformation(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

static inline ::Backtrace::Unity::Model::Attributes::MachineAttributeProvider* New_ctor() ;

constexpr ::Backtrace::Unity::Model::MachineIdStorage* const& __cordl_internal_get__machineIdStorage() const;

constexpr ::Backtrace::Unity::Model::MachineIdStorage*& __cordl_internal_get__machineIdStorage() ;

constexpr void __cordl_internal_set__machineIdStorage(::Backtrace::Unity::Model::MachineIdStorage*  value) ;

/// @brief Method .ctor, addr 0x5f19a00, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IScopeAttributeProvider* i___Backtrace__Unity__Model__Attributes__IScopeAttributeProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MachineAttributeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MachineAttributeProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MachineAttributeProvider(MachineAttributeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MachineAttributeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MachineAttributeProvider(MachineAttributeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27650};

/// @brief Field _machineIdStorage, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Model::MachineIdStorage*  ____machineIdStorage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::Attributes::MachineAttributeProvider, ____machineIdStorage) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::Attributes::MachineAttributeProvider) == 0x18, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Attributes
