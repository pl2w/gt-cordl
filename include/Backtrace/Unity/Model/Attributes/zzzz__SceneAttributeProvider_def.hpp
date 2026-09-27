#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/Attributes/SceneAttributeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SceneAttributeProvider)
namespace Backtrace::Unity::Model::Attributes {
class IDynamicAttributeProvider;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
// Forward declare root types
namespace Backtrace::Unity::Model::Attributes {
class SceneAttributeProvider;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::Attributes::SceneAttributeProvider*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::Attributes::SceneAttributeProvider*, "Backtrace.Unity.Model.Attributes", "SceneAttributeProvider");
// Dependencies System.Object
namespace Backtrace::Unity::Model::Attributes {
// Is value type: false
// CS Name: Backtrace.Unity.Model.Attributes.SceneAttributeProvider
class CORDL_TYPE SceneAttributeProvider : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr operator  ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider*() noexcept;

/// @brief Method GetAttributes, addr 0x5f23b04, size 0x6b4, virtual true, abstract: false, final true
inline void GetAttributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes) ;

static inline ::Backtrace::Unity::Model::Attributes::SceneAttributeProvider* New_ctor() ;

/// @brief Method .ctor, addr 0x5f19a8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider"
constexpr ::Backtrace::Unity::Model::Attributes::IDynamicAttributeProvider* i___Backtrace__Unity__Model__Attributes__IDynamicAttributeProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneAttributeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneAttributeProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneAttributeProvider(SceneAttributeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneAttributeProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneAttributeProvider(SceneAttributeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27655};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Backtrace::Unity::Model::Attributes::SceneAttributeProvider) == 0x10, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::Attributes
