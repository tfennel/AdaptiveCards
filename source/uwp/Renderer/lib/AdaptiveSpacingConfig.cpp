#include "pch.h"
#include "AdaptiveSpacingConfig.h"

using namespace Microsoft::WRL;
using namespace ABI::AdaptiveCards::Rendering::Uwp;

namespace AdaptiveCards { namespace Rendering { namespace Uwp
{
    HRESULT AdaptiveSpacingConfig::RuntimeClassInitialize() noexcept try
    {
        SpacingConfig spacingConfig;
        return RuntimeClassInitialize(spacingConfig);
    } CATCH_RETURN;

    HRESULT AdaptiveSpacingConfig::RuntimeClassInitialize(SpacingConfig spacingConfig) noexcept try
    {
        m_small = spacingConfig.smallSpacing;
        m_medium = spacingConfig.mediumSpacing;
        m_large = spacingConfig.largeSpacing;
        m_extraLarge = spacingConfig.extraLargeSpacing;
        m_default = spacingConfig.defaultSpacing;
        m_padding = spacingConfig.paddingSpacing;
        return S_OK;
    } CATCH_RETURN;

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::get_Small(UINT32* smallSpacing)
    {
        *smallSpacing = m_small;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::put_Small(UINT32 smallSpacing)
    {
        m_small = smallSpacing;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::get_Default(UINT32* defaultSpacing)
    {
        *defaultSpacing = m_default;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::put_Default(UINT32 defaultSpacing)
    {
        m_default = defaultSpacing;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::get_Medium(UINT32* mediumSpacing)
    {
        *mediumSpacing = m_medium;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::put_Medium(UINT32 mediumSpacing)
    {
        m_medium = mediumSpacing;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::get_Large(UINT32* largeSpacing)
    {
        *largeSpacing = m_large;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::put_Large(UINT32 largeSpacing)
    {
        m_large = largeSpacing;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::get_ExtraLarge(UINT32* extraLargeSpacing)
    {
        *extraLargeSpacing = m_extraLarge;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::put_ExtraLarge(UINT32 extraLargeSpacing)
    {
        m_extraLarge = extraLargeSpacing;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::get_Padding(UINT32* paddingSpacing)
    {
        *paddingSpacing = m_padding;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveSpacingConfig::put_Padding(UINT32 paddingSpacing)
    {
        m_padding = paddingSpacing;
        return S_OK;
    }
}}}
