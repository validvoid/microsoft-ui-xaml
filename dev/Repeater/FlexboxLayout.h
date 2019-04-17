﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "NonVirtualizingLayout.h"
#include "FlexboxLayout.g.h"
#include "FlexboxLayout.properties.h"

class FlexboxLayout :
    public ReferenceTracker<FlexboxLayout, winrt::implementation::FlexboxLayoutT, NonVirtualizingLayout>,
    public FlexboxLayoutProperties
{
public:
    FlexboxLayout();

#pragma region INonVirtualizingLayoutOverrides
    void InitializeForContextCore(winrt::LayoutContext const& context);
    void UninitializeForContextCore(winrt::LayoutContext const& context);

    winrt::Size MeasureOverride(winrt::LayoutContext const& context, winrt::Size const& availableSize);
    winrt::Size ArrangeOverride(winrt::LayoutContext const& context, winrt::Size const& finalSize);
#pragma endregion

    void OnPlaceholderPropertyChanged(const winrt::DependencyPropertyChangedEventArgs& args);
};