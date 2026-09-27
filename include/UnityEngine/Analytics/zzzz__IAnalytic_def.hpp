#pragma once
// IWYU pragma private; include "UnityEngine/Analytics/IAnalytic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAnalytic)
namespace UnityEngine::Analytics {
class IAnalytic_IData;
}
// Forward declare root types
namespace UnityEngine::Analytics {
class IAnalytic;
}
namespace UnityEngine::Analytics {
class IAnalytic_IData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Analytics::IAnalytic*);
MARK_REF_T(::UnityEngine::Analytics::IAnalytic_IData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Analytics::IAnalytic*, "UnityEngine.Analytics", "IAnalytic");
DEFINE_IL2CPP_CLASS(::UnityEngine::Analytics::IAnalytic_IData*, "UnityEngine.Analytics", "IAnalytic/IData");
// [ExcludeFromDocs]
// Dependencies 
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.IAnalytic
class CORDL_TYPE IAnalytic {
public:
// Declarations
using IData = ::UnityEngine::Analytics::IAnalytic_IData;

// Ctor Parameters [CppParam { name: "", ty: "IAnalytic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnalytic(IAnalytic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32615};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
// Dependencies 
namespace UnityEngine::Analytics {
// Is value type: false
// CS Name: UnityEngine.Analytics.IAnalytic/IData
class CORDL_TYPE IAnalytic_IData {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IAnalytic_IData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAnalytic_IData(IAnalytic_IData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32614};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Analytics
